#include <bits/stdc++.h>
using namespace std;
#define SIZE 1'000'000
long long n, m, arr[SIZE], cnt, res;

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    sort(arr, arr+m);
    long long st = 1, en = arr[m-1];

    while (st <= en) {
        long long mid = (st+en)/2; cnt = 0;
        for(int i=0; i<m; i++) {
            cnt += arr[i]/mid;
        }
        if (cnt >= n) {
            res = mid;
            st = mid+1;
        }
        else {
            en = mid-1;
        }
    }
    cout << res;
    return 0;
}
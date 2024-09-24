#include <bits/stdc++.h>
using namespace std;
#define SIZE 500'000
int n, m, arr[SIZE],brr[SIZE], target;
vector<int> res;

int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);

    for(int i=0; i<m; i++){
        cin >> brr[i];
    }
    sort(brr, brr+m);
    for(int i=0; i<n; i++){
        target = arr[i];
        if(!binary_search(brr, brr+m, target)){
            res.push_back(target);
        }
    }
    cout << res.size() << '\n';
    for(int x : res)
        cout << x << ' ';
    return 0;
}
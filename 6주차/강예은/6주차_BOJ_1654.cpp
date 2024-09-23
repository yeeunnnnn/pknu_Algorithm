#include <bits/stdc++.h>
using namespace std;

long long n;
int k;

bool Func(long long arr[], long long mid){
    long long cnt=0;
    for(int i=0; i<k; i++){
        cnt += arr[i]/mid;
    }
    return cnt >= n;
}

int main(){
    scanf("%lld %lld", &k, &n);
    long long arr[k], max=0;
    for(int i=0; i<k; i++){
        scanf("%lld", &arr[i]);
        if(max < arr[i]) max = arr[i];
    }
    long long st = 1, en = max;
    while(st <= en){
        long long mid = (st+en)/2;
        if(Func(arr, mid)) st = mid+1;
        else en = mid-1;
    }
    printf("%d",en);
    return 0;
}
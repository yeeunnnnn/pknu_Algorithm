#include <bits/stdc++.h>
using namespace std;
#define SIZE 100'101

int main() {
    int n, m, target, arr[SIZE];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+n);
    scanf("%d", &m);
    while(m--) {
        scanf("%d", &target);
    int st = 0, en = n-1;
    bool is_find = false;
    while(st <= en){
        int mid = (st+en)/2;
        if (arr[mid] == target){
            is_find = true;
            break;
        }
        else if (arr[mid]<target) st = mid + 1;
        else if (arr[mid]>target) en = mid - 1;
    }
    printf("%d\n", is_find);
    }

    return 0;
}
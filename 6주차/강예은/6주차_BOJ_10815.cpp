#include <bits/stdc++.h>
using namespace std;
#define SIZE 500'005

int main() {
    int n, m, target, arr[SIZE];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+n);
    scanf("%d", &m);
    while(m--) {
        scanf("%d", &target);
        printf("%d ",binary_search(arr, arr+n, target));
    }

    return 0;
}
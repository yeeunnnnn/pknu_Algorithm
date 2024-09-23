#include <bits/stdc++.h>
using namespace std;
#define SIZE 500'000

int main() {
    int n, m, target, arr[SIZE];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    sort(arr, arr+n);
    scanf("%d", &m);
    while(m--) {
        scanf("%d", &target);
    printf("%d ",upper_bound(arr, arr+n, target) - lower_bound(arr, arr+n, target));
    }
    return 0;
}

// target 초과 인덱스 - target 이상 인덱스
// upper_bound: target값을 초과하는 첫 인덱스, lower_bound: target 이상 값의 첫 인덱스

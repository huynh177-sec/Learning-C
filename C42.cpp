#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int comp(const void *a, const void *b) {
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}

int main() {
    int n, a[100005];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){ 
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comp);
    int min = INT_MAX;

    for(int i = 1; i < n; i++) {
        int dis = a[i] - a[i-1];
        if(dis < min)
            min = dis;
    }

    printf("%d", min);
    return 0;
}
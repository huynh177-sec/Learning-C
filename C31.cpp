#include <stdio.h>
int main() {
    int n, a[1005];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);

    int count = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == k) {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
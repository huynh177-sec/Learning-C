#include <stdio.h>
int a[1000005]; 
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int check = 1;   
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            check = 0; 
            break;     
        }
    }
    if (check == 1) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}
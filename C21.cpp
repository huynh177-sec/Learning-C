#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);   
    long long dem = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            dem++;
        }
    }    
    printf("%lld\n", dem);    
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i); 
        }
    }
    
    return 0;
}

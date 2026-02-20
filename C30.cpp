#include <stdio.h>
int main(){
    int n, a[1005];
    scanf("%d", &n);
    for(int i = 0 ; i< n ; i++){
        scanf("%d", &a[i]);
    }
    int check = 0;
    for(int i = 0 ; i < n ; i++){
        if(i % 2 == 0 && a[i] % 2 == 0){
            printf("%d ", a[i]);
            check = 1;
        }
    }
    if(check == 0) printf("NONE");
    return 0;
}
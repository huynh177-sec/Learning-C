#include <stdio.h>
#include <stdlib.h>
int comp_tang(const void *a , const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y; 
}
int comp_giam(const void * a , const void * b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *y - *x; 
}
int main(){
    int n, a[1005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n , sizeof(int), comp_tang);
        for(int i = 0 ; i < n ; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    qsort(a, n , sizeof(int), comp_giam);
        for(int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
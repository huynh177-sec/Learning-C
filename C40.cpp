#include <stdio.h>
#include <stdlib.h>
int comp(const void *a , const void *b){
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y; 
}
int main(){
    int n;
    scanf("%d", &n);
    int *a = (int*) malloc(n * sizeof(int));
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n , sizeof(int), comp);
    int count = 1 ;
        for(int i = 1 ; i < n ; i++){
            if(a[i] != a[i-1]) ++count;
        }
        printf("%d", count);
        free(a);
    }


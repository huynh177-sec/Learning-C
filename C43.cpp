#include <stdio.h>
#include <stdlib.h>
int tong(int x){
    int sum = 0;
    while(x != 0){
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int comp(const void * a , const void * b){
    int *x = (int*)a;
    int *y = (int*)b;
    if(tong(*x) != tong(*y)) return tong(*x) - tong(*y);
    else return *x - *y;
}
int main(){
    int n, a[100005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), comp);
    for(int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
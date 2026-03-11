#include <stdio.h>
#include<limits.h>
int main(){
    int n, a[100], min= INT_MAX, max = INT_MIN, vitrimin = 0, vitrimax = 0;
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
        if(a[i] < min){
            min = a[i];
            vitrimin = i;
        }
        if(a[i] > max){
            max = a[i];
            vitrimax = i; 
        }
    }
        printf("%d\n%d\n%d\n%d", min, vitrimin, max, vitrimax);
    return 0;
}
 
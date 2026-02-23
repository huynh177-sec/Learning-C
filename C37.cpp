#include <stdio.h>
void bubbleSort(int a[], int n){
    for(int i = 0 ; i < n-1 ; i++){
        for( int j = 0 ; j < n-1-i ; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main(){
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    bubbleSort(a, n);
    for(int i = 0 ; i < n ; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
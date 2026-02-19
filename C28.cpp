#include <stdio.h>
int main(){
    int n, a[1005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0, min = a[0];
    for (int i = 1 ; i < n ; i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    for(int i = 0 ; i < n ; i++){
        if(a[i] == min) ++cnt;
    }
    printf("%d", cnt);
    return 0;
}
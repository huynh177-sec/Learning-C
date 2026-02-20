#include <stdio.h>
int main(){
    int n, a[1005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int X;
    scanf("%d", &X);
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] > X) ++cnt1;
        else if(a[i] < X) ++cnt2;
    }
    printf("%d\n%d", cnt2, cnt1);
    return 0;
}
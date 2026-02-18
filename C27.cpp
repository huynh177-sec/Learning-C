#include <stdio.h>
#include <math.h>
int nt(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if( n % i == 0) return 0;
    }
    return 1;
}
int main(){
    int n, a[1005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int cnt = 0;
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        if(nt(a[i]) == 1){
            ++cnt;
            sum += a[i];
        }
    }
    if(cnt > 0){
        double ketqua = (double)sum / cnt;
        printf("%.3lf", ketqua);
    }
    else
    printf("0.000");
    return 0;

}
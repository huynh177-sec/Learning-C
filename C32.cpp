#include <stdio.h>
#include <math.h>
int nt(int n){
    if(n < 2) return 0;
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n % i == 0) return 0;
    }
    return 1;
}
int tn(int n){
    int lat = 0, temp = n;
    while(n != 0){
        lat = lat * 10 + n % 10;
        n /=10;
    }
    if(temp == lat) return 1;
    else return 0;
}
int cp(int n){
int can = sqrt(n);
   if(can * can == n) return 1;
   else return 0;
}

int main(){
    int n, a[10005];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int count = 0, cnt2 = 0, cnt3 = 0;
    for(int i = 0 ; i < n ; i++){
        if(nt(a[i]) == 1) ++count;
        if(tn(a[i]) == 1) ++cnt2;
        if(cp(a[i]) == 1) ++ cnt3;
    }
    printf("%d\n%d\n%d", count, cnt2, cnt3);
    return 0;
}
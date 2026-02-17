#include <stdio.h>   
int main(){
    int n, a[1000];
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
    }
    int demchan = 0, demle = 0, tongchan = 0, tongle = 0;
    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            ++demchan;
            tongchan += a[i];
        }
        else{
            ++demle;
            tongle += a[i];
    }
}
    printf("%d\n", demchan);
    printf("%d\n", demle);
    printf("%d\n", tongchan);
    printf("%d\n", tongle);
}
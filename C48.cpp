#include <stdio.h>
#include <string.h>
#include <ctype.h>
void lat(char c[]){
    int l = 0, r = strlen(c) - 1;
    while(l <= r){
        char tam = c[l];
        c[l] = c[r];
        c[r] = tam;
        ++l; --r;
    }
}
void thuong(char c[]){
    for(int i = 0 ; i < strlen(c) ; i++){
        c[i] = (tolower(c[i]));
    }
        
}  
void hoa(char c[]){
    for(int i = 0 ; i < strlen(c) ; i++){
        c[i] = toupper(c[i]);
    }
}
int main(){
    char c[10001];
    scanf("%s", c);
    lat(c);
    printf("%s\n", c);
    lat(c);
    thuong(c);
    printf("%s\n", c);
    hoa(c);
    printf("%s\n", c);
    return 0;
}
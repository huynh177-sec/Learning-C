#include <stdio.h>
#include <string.h>
int main(){
    char c[1000];
    scanf("%s", c);
    if(strlen(c) % 2 == 0)
     printf("NOT FOUND\n");
    else
    printf("%c", c[strlen(c) / 2]);
    return 0; 
}
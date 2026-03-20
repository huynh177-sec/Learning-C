#include <stdio.h>
#include <string.h>

int main(){
    char c[100] ="hello";
    char b[] = "world";
    strcat(c, b);
    printf("%s ", c);
}

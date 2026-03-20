#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char c[]){
    for(int i = 0 ; i < strlen(c) ; i++){
        if(islower(c[i]))
        return 0;
    }
    return 1;
}
int main(){
    char c[10001];
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';
    int count = 0;
    char* token = strtok(c, " ");
    while(token != NULL){
        if(check(token) ) ++count;
        token = strtok(NULL, " ");
    }
    printf("%d", count);
    return 0;
}


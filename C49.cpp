#include <stdio.h>
#include <string.h>
#include <ctype.h>
void hoa(char c[]){
    for(int i = 0 ; i < strlen(c) ; i++){
        c[i] = tolower(c[i]);
    }
}
int main(){
    char c[1000];
    fgets(c, sizeof(c), stdin);
    c[strcspn(c, "\n")] = '\0';
    int count = 0;
    char* token = strtok(c, "/");
    while(token != NULL){
        hoa(c);
        
        token = strtok(NULL, "/");
    }
return 0;
}
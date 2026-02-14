#include <stdio.h>
void dequy(){
    printf("Hello Nguyen Viet Huynh\n");
    dequy();
    printf("Xin chao Nguyen Viet Huynh");
}
int main(){
    dequy();
    return 0;
}

#include <stdio.h>
int main (){
	char kitu;
	scanf("%c", &kitu);
	if(kitu >= 97 && kitu <= 122){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}

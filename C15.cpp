#include <stdio.h>
int main(){
	int a=100, b=101;
	char kitu;
	scanf("%c", &kitu);
	switch(kitu){
		case '+':
			printf("%d", a+b);
		break;	
		case '-':
		    printf("%d", a-b);
		break;    
		case '*':
		    printf("%d", a*b);
		break;    
		case'/':
		    printf("%.2lf", (double)a / b);
		break;    
	    default:
		    printf("Dau khong hop le");			
	}		
	
	return 0;
}

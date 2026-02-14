#include <stdio.h>
 int main(){
 	int a;
 	scanf("%d", &a);
 	if(( a % 2) == 0)
 		printf("YES\n");
	else{
		printf("NO\n");
	}
	//1
	if(( a % 3 == 0) && (a % 5 ==0))
		printf("YES\n");
	else{
		printf("NO\n");
	}	
	//2
	if((a % 3 ==0) && (a % 7 != 0))
	    printf("YES\n");
	else{
		printf("NO\n");
	}    
	//3
	if((a % 3 == 0) || (a % 7 == 0))
	    printf("YES\n");
	else{
		printf("NO\n");
	}
	//4
	if((a > 30) && (a < 50))
	    printf("YES\n");
	else{
		printf("NO\n");
	}	    
    //5
    if(( a >= 30) && ((a % 2 == 0) || (a % 3 == 0) || (a % 5 == 0)))
        printf("YES\n");
	else{
		printf("NO\n");
	}
	//6
	if((a >= 10 && a <= 99) && ((a % 10) == 2 || (a %10) == 3 || (a % 10) == 5 || (a % 10) == 7))
		printf("YES\n");
	else{
		printf("NO\n");
	}	
	//7
	if((a <= 100) && (a % 23 == 0))
	    printf("YES\n");
	else{
		printf("NO\n");
	}
	//8
	if((a < 10) || (a > 20))
	    printf("YES\n");
	else{
		printf("NO\n");
	}
	//9
	if((a % 10) % 3 == 0)
	    printf("YES\n");
	else{
		printf("NO\n");
	}    
	//10
	return 0;					
 }

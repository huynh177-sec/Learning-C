#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i <= n ; i++){
		if(i % 7 == 0){
		printf("%d ", i);
	}
}
    printf("\n");
    for(int i = 0 ; i <= n ; i += 7){
    	printf("%d ", i);
	}
	return 0;
}

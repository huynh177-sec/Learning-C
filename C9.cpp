#include <stdio.h>

int main(){
	// Kiem tra nam nhuan : Nam chia het cho 400 hoac chia het cho 4 va khong chia het cho 100
	int x;
	scanf("%d", &x);
	if((x % 400) == 0 || ((x % 4)==0 && (x % 100) !=0) ){
		printf("Nam nhuan chinh xac!\n");
		printf(" Siuuuuuuuu");
	}
	else{
		printf(" Khong phai nam nhuan!\n");
		printf("Vamossss");
	} 
	
	return 0;
}

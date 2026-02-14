#include <stdio.h>
int main(){
	int m=5,n=5;
	int ketqua=(m++ > --n) ? 17:7;
	printf("m= %d, n=%d, ketqua= %d", m, n, ketqua);
	
	
	return 0;
}

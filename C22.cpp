#include <stdio.h>
int main(){
	long long n;
	scanf("%lld", &n);
	long long tong = 0;
	for(int i = 1 ; i <= n ; i++){
		
			tong += (2 * i) - 1 ;
		}		
	printf("%lld", tong);
	return 0;
}

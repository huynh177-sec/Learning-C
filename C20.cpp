#include <stdio.h>
int main(){
	long long n;
	scanf("%lld", &n);
	long long tong = 0;
	for(int i = 1 ; i <= n ; i++){
		tong += i;
	}
	printf("%lld", tong);
	return 0;
}

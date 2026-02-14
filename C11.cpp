#include <stdio.h>
int main (){
	long long a,b;
	scanf("%lld %lld", &a, &b);
	long long tong = a + b;
	long long hieu = a - b;
	long long tich = a * b;
	printf("%lld\n",tong);
	printf("%lld\n",hieu);
	printf("%lld\n", tich);
	if(b == 0){
		printf("INVALID");
	}
	else{
		double thuong= (double) a / b;
		printf("%.4lf", thuong);
	}
	
	
}

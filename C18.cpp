#include <stdio.h>
   
 int main(){
 	long long a, b, c;
 	scanf("%lld %lld %lld", &a, &b, &c);
 	long long shtq = b + (a-1) * c;
 	long long tongcsc = ((a * (b + shtq)) / 2);
 	printf("%lld", tongcsc);
 	return 0;
 	
 	
 }

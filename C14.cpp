#include <stdio.h>
int main(){
	double a,b,c,d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	double x = (a + b + c * 2 + d * 3) / 7;
	
		if(x >= 8){
			printf("GIOI");
		}
		else if(x < 8 && x >= 6.5){
			printf("KHA");
		}
		else if(x < 6.5 && x >= 5){
			printf("TRUNG BINH");
		}	
	else{
		printf("YEU");
	}
	return 0;
}

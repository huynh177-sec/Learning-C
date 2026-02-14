#include <stdio.h>
int main(){
	int a,b,c;
	printf("Moi ban nhap gia tri cua ba canh:");
	scanf("%d %d %d", &a,&b,&c);
	int check= (a+b>c)&&(a+c>b)&&(b+c)>a;
	printf("Ket qua: %d", check);
	return 0;
}

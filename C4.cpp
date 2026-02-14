#include <stdio.h>
int main(){
	int tong_giay;
	printf("Moi ban nhap tong giay: ");
	scanf("%d", &tong_giay);
	int gio=tong_giay/3600;
	int phut=(tong_giay%3600)/60;
	int giay=tong_giay%60;
	printf("Ketqua: %d gio, %d phut, %d giay", gio, phut, giay);
}

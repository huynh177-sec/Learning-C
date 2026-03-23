#include <stdio.h>
#include <string.h>

 struct SinhVien{
    char ten[100];
    char lop[50];
    double gpa;
} ;
typedef struct SinhVien SinhVien;

SinhVien nhap(){
    SinhVien x;

    printf("Nhap ten: ");
    fgets(x.ten, sizeof(x.ten), stdin);
    x.ten[strcspn(x.ten, "\n")] = '\0';

    printf("Nhap lop: ");
    fgets(x.lop, sizeof(x.lop), stdin);
    x.lop[strcspn(x.lop, "\n")] = '\0';

    printf("Nhap gpa: ");
    scanf("%lf", &x.gpa);
    getchar();

    return x;
}

void xuat(SinhVien x){
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

int main(){
    int n;
    SinhVien a[100];
    while(1){
        printf("------------QLSV----------\n\n");
        printf("1. Nhap danh sach sinh vien\n");
        printf("2. Hien thi danh sach sinh vien\n");
        printf("0. Thoat !\n"); 

        printf("Nhap lua chon :");
        int lc ; scanf("%d", &lc);
        if(lc == 0) break;
        if(lc == 1){
            printf("Nhap so luong sinh vien :"); scanf("%d", &n);
            getchar();
            for(int i = 0 ; i < n ; i++){
                a[i] = nhap();
            }
        }
        else if(lc == 2){
            printf("Danh sach sinh vien : \n");
            for( int i = 0 ; i < n ; i++){
                xuat(a[i]);
            }
        }    
        else printf("Lua chon khong hop le");
        }
    }


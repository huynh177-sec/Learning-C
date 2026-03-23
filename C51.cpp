#include <stdio.h>
#include <string.h>

struct SinhVien{
    char ten[100];
    char lop[100];
    double gpa;
};

typedef struct SinhVien SinhVien;
int main(){
    SinhVien x;
    printf("Nhap ten sinh vien: ");
    fgets(x.ten, sizeof(x.ten), stdin);
    x.ten[strcspn(x.ten, "\n")] = '\0';

    printf("Nhap lop sinh vien: ");
    fgets(x.lop, sizeof(x.lop), stdin);
    x.lop[strcspn(x.lop, "\n")] = '\0';

    printf("Nhap gpa: ");
    scanf("%lf", &x.gpa);
    
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
    return 0;
}




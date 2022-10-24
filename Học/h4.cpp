#include <stdio.h>

int main() {
    char ho_ten[50];
    printf("Moi nhap ho ten: ");
    //fgets(ho_ten, sizeof(ho_ten), stdin);
    gets(ho_ten);

    char mssv[10];
    printf("Moi nhap mssv: ");
    scanf("%s", &mssv); // scanf nhan enter vs space ket thuc

    printf("Thong tin sv: %s - %s", mssv, ho_ten);
}
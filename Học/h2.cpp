#include <stdio.h>

// Chuong trinh quan ly diem sinh vien
// Voi n ban sinh vien
int main() {
    //B1 Khai bao
    int i;
    int n;
    int diem[n];
    printf("Moi nhap so sinh vien: ");
    scanf("%d", &n);
    
    //B2 Nhap diem
    for(i = 0; i < n ; i++) {
        printf("Tai dia chi %d, moi nhap diem ban thu %d: ", diem[i],  i);
        scanf("%d", &diem[i]);// diem[i] <=> lay gia tri phan tu tai vi tri i
    }
    printf("\n ======= \n");

    //B3 In diem
    for(i = 0; i < n; i++) {
        printf("Diem ban thu %d co gia tri = %d tai dia chi %d\n", i, diem[i], &diem[i]);
    }
    //B4 Lay diem tai vi tri bat ki
    int a;
    printf("Moi nhap vi tri sinh vien: ");
    scanf("%d", &a);
    printf("Tai vi tri %d co diem la %d", a, diem[a]);
}


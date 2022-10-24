#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lay_so_ngau_nhien() {
    int minN = 0;
    int maxN = 10;
    int so_ngau_nhien = minN + rand() % (maxN + 1 - minN);
    return so_ngau_nhien;
}

// Chuong trinh quan ly diem sinh vien
// Voi n ban sinh vien
int main() {
    //B1 Khai bao
    int i;// Bien dem
    int n;
    int diem[n];// Tao mang cac so nguyen gom n phan tu
    printf("Moi nhap so sinh vien: ");
    scanf("%d", &n);
    
    //B2 Nhap diem
    srand((int)time(0));// Ham nay chi nen goi 1 lan duy nhat
    for(i = 0; i < n ; i++) {
        diem[i] = lay_so_ngau_nhien();
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

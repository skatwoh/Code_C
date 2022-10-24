#include <stdio.h>

int main() {
    int so = 12345;
    int tong = 0;

    int chu_so_cuoi_cung = so % 10;
    tong = tong + chu_so_cuoi_cung;
    printf("so cuoi cung: %d\n ");

    int chu_so_thu_tu = so / 10;
    int bon_chu_so_dau = chu_so_thu_tu % 10;
    tong = tong + bon_chu_so_dau;
    printf("so thu tu: %d\n");

    
    int chu_so_thu_ba = so / 100;
    int ba_chu_so_dau = chu_so_thu_ba % 10;
    tong = tong + ba_chu_so_dau;
    printf("so thu ba: %d\n");

    
    int chu_so_thu_hai = so / 1000;
    int hai_chu_so_dau = chu_so_thu_hai % 10;
    tong = tong + hai_chu_so_dau;
    printf("so thu hai: %d\n");

    
    int chu_so_thu_nhat = so / 10000;
    int mot_chu_so_dau = chu_so_thu_nhat % 10;
    tong = tong + mot_chu_so_dau;
    printf("so thu nhat: %d\n");
    
    printf("Tong = %d", tong);

    return tong;
}
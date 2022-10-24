#include <stdio.h>

int main() {

    int so_khoi;
    printf("Moi nhap so khoi: ");
    scanf("%d", &so_khoi);

    int tien_nuoc;
    if (so_khoi >= 0 && so_khoi <= 10) {
        tien_nuoc = so_khoi * 1000;
    }
    else if (so_khoi >= 11 && so_khoi <=30) {
        tien_nuoc = so_khoi * 1200;
    }
    else if (so_khoi > 30) {
        tien_nuoc = so_khoi *1500;
    }
    
    printf(" Tien nuoc phai tra = %d (VND)", tien_nuoc);
}
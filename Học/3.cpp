#include <stdio.h>

int main() {

    int so_tuoi_1;
    printf("Moi nhap so tuoi 1: ");
    scanf("%d", &so_tuoi_1);

    int so_tuoi_2, co_thai;
    printf("Moi nhap so tuoi 2: ");
    scanf("%d", &so_tuoi_2);

    printf("Co thai khong?");
    scanf("%d", &co_thai);

    int boc_lich;
    int phat_tien;

    if (so_tuoi_1 >= 14 && so_tuoi_2 < 10) {
        printf("Chung than hoac tu hinh\n");
        boc_lich = 20;
    }
    else if (so_tuoi_1 >= 14 && 10 < so_tuoi_2 < 13 && !co_thai) {
        boc_lich = 15;
    }
    else if (so_tuoi_1 >= 14 && 10 < so_tuoi_2 < 13 && co_thai) {
        boc_lich = 20;
    }
    else if (so_tuoi_1 > 18 && so_tuoi_2 >= 16) {
        boc_lich = 0;
    }
    else if (so_tuoi_1 > 18 && so_tuoi_2 >= 16) {
        printf("Mua dam");
        phat_tien = 500000;
    }
    printf("Di tu = %d nam", boc_lich, phat_tien);
}
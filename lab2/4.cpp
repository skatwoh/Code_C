#include <stdio.h>

/*
* @Author: DQKhanh
* @Descriptions: Dung de nhap nam tu ban phim
* Return: Nam duoc nhap tu ban phim
*/
int nhap_nam() {
    int nam;
    printf("Moi nhap nam: ");
    scanf("%d", &nam);
    return nam;
}

/*
* @Author: DQKhanh
* @Descriptions: Dung de lay chu so cuoi cung cua so
* Return: Chu so cuoi cung cua so
*/
int lay_so_cuoi(int nam) {
    int so_cuoi = nam % 10;
    return so_cuoi;
}

/*
* @Author: DQKhanh
* @Descriptions: Dung de lay chu so cuoi cung cua so
* Tu 0 - 9 tuong duong voi: Canh, Tan, Nham, Quy, Giap, At, Binh, Dinh, Mau, Ky
* Return: Chu so cuoi cung cua so
*/
void tinh_can(int so_cuoi_cua_nam) {
    switch (so_cuoi_cua_nam) {
        case 0 : printf("Canh\n");
        break;
        case 1 : printf("Tan\n");
        break;
        case 2 : printf("Nham\n");
        break;
        case 3 : printf("Quy\n");
        break;
        case 4 : printf("Giap\n");
        break;
        case 5 : printf("At\n");
        break;
        case 6 : printf("Binh\n");
        break;
        case 7 : printf("Dinh\n");
        break;
        case 8 : printf("Mau\n");
        break;
        case 9 : printf("Ky\n");
        break;
        default:
            printf("Khong co :))");
    }
}

/*
* @Author: DQKhanh
* @Descriptions: Dung de lay chu so cuoi cung cua so
* Tu 0 - 11 tuong duong voi: Ti, Suu, Dan, Mao, Thin, Ty, Ngo, Mui, Than, Dau, Tuat, Hoi
* Return: Chu so cuoi cung cua so
*/
void tinh_chi(int so_nam) {
    int so_chi = (so_nam + 8) % 12;
    switch (so_chi) {
        case 0 : printf("Ti\n");
        break;
        case 1 : printf("Suu\n");
        break;
        case 2 : printf("Dan\n");
        break;
        case 3 : printf("Mao\n");
        break;
        case 4 : printf("Thin\n");
        break;
        case 5 : printf("Ty\n");
        break;
        case 6 : printf("Ngo\n");
        break;
        case 7 : printf("Mui\n");
        break;
        case 8 : printf("Than\n");
        break;
        case 9 : printf("Dau\n");
        break;
        case 10 : printf("Tuat\n");
        break;
        case 11 : printf("Hoi\n");
        break;
        default:
            printf("Khong co :))");
    }
}

int main() {
    printf("Chuong trinh goi ten nam theo lich am\n");

    while (1) {
        int nam = nhap_nam();
        int so_cuoi_cua_nam = lay_so_cuoi(nam);

        tinh_can(so_cuoi_cua_nam);
        printf(" ");
        tinh_chi(nam);
        printf("\n\n");
    }
    
}
#include <stdio.h>

// Chuong trinh quan ly diem sinh vien
// Voi 3 ban sinh vien
int main() {
    //B1 Khai bao
    int diem[3];
    int i;

    //B2 Nhap diem
    for(i = 0; i < 3; i++) {
        printf("Moi nhap diem %d: ",  i);
        scanf("%d", &diem[i]);// diem[i] <=> lay gia tri phan tu tai vi tri i
    }
    printf("\n ======= \n");

    //B3 In diem
    for(i = 0; i < 3; i++) {
        printf("Diem %d = %d\n", i, diem[i]);
    }
}

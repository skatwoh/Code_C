#include <stdio.h>

int main() {
    char tra_loi;

    do {// thuc hien
        printf("Vuon hong co ai vao hay chua?");
        scanf("%c", &tra_loi);
        fflush(stdin);
    } while (tra_loi != 'Y'); // Dieu kien thoat

}
#include <stdio.h>

int main() {
    char chuoi[99];
    printf("Moi ban nhap chuoi: ");
    scanf("%s", chuoi);

    int i;
    for (i = 0; i < 99; i++) { // vòng lặp : for, while 
        if (chuoi[i] == '\0') {
            break;
        }
        // Chi doi khi ki tu la chu thuong
        if (chuoi[i] >= 97 && chuoi[i] <= 122) {
            chuoi[i] = chuoi[i] - 32;
        }
    }
    printf("\nIn hoa: %s", chuoi);
}

// 97 -> a <Arr>
// 65 -> A <biến cần tìm>
// 97 - 32 = 65 <Arr - 32 = biến cấn tìm>

#include <stdio.h>

int main() {
    char chuoi[99];
    printf("Moi ban nhap chuoi: ");
    scanf("%s", chuoi);

    int i;
    printf("Dinh dang he HEX = ");
    for (i = 0; i < 99; i++) {
        if (chuoi[i] == '\0') {
            break;
        }
        printf("%x - ", chuoi[i]);
    }
    
    int do_dai = 0;
    for(i = 0; i < 99; i++) {
        if(chuoi[i] == '\0') { // Neu gap ki tu ket thuc chuoi
            break; // thi thoat khoi vong lap
        }
        do_dai++;
    }
    printf("\nDo dai chuoi = %d", do_dai);
}
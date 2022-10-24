#include <stdio.h>
/*
*Author: DQKhanh
*@Description: Kiem tra ky tu truyen vao co phai la so khong?
*@param character: Ky tu can kiem tra
@Return: Dung(1) hoac sai(0)
*/
int is_digit (char character) {
     if ((character <48) || (character >57)) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    char Ky_tu;
    printf("Moi nhap ky tu kiem tra: ");
    scanf("%c", &Ky_tu);
    
    printf("%c", is_digit(Ky_tu));
    if ((Ky_tu <48) || (Ky_tu >57)) {
     printf(" Ky tu khong phai la so");
    } else {
     printf(" Ky tu la so");
    }
}
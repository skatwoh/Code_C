#include <stdio.h>
/*
*Author: DQKhanh
*@Description: Ai duoc diem 10?
*@param 
@Return: Dap an
*/
int main() {
    char Dap_an;

    printf("int la kieu du lieu gi?\n");
    printf("a. So nguyen\nb. So thuc\nc. Ky tu\nd. Khong gi ca\n");
    printf("Xin moi nhap dap an ban chon: ");
    scanf("%s", &Dap_an);

    switch (Dap_an){
        case 'a' : printf("Hao han\n");
        break;
        case 'b' : printf("Chuc ban may man lan sau\n");
        break;
        case 'c' : printf("Chuc ban may man lan sau\n");
        break;
        case 'd' : printf("Chuc ban may man lan sau\n");
        break;
        default:
            printf("Chon vay chiu roi :))");
    }
}
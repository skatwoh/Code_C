#include <stdio.h>

void chuyen_chu_thuong_thanh_hoa(){
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

int main(){
    
    int chon;
    printf("moi ban chon chuc nang: ");
    scanf("%d", &chon);

    switch (chon)
    {
    case 1:
        chuyen_chu_thuong_thanh_hoa();
        break;
    
    default:
    printf("muc ban chon khong co");
        break;
    }
}

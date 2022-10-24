#include <stdio.h>

void menu() {
    printf("+----------Menu-----------+");
    printf("\n1. Thong tin ca nhan");
    printf("\n2. Xep loai nhan vien");
    printf("\n3. Thong tin vat nuoi");
    printf("\n0. Thoat");
    printf("\n+---------------------------");
}

void thong_tin() {
    int sonha;
    char datnuoc[50];
    char thanhpho[50];
    char duong[50];
   
    printf("Moi nhap dat nuoc:\n ");
    fflush(stdin);
    gets(datnuoc);
    printf("Moi nhap thanh pho:\n ");
    fflush(stdin);
    gets(thanhpho);
    printf("Moi nhap duong:\n ");
    fflush(stdin);
    gets(duong);
    printf("Moi nhap so nha:\n ");
    scanf("%d", &sonha);

    printf("\nThong tin ca nhan\n");
    printf("Dat nuoc: ");
    puts(datnuoc);
    printf("Thanh pho: ");
    puts(thanhpho);
    printf("Duong: ");
    puts(duong);
    printf("So nha: %d\n", sonha);
}

void xep_loai() {
    int tuoi;
    printf("Moi nhap tuoi nhan vien: ");
    scanf("%d", &tuoi);
    if(tuoi>0 && tuoi<18){
        printf("Tuoi tre\n");
    } else if(tuoi>= 18 && tuoi <= 55) {
        printf("Tuoi lao dong\n");
    } else {
        printf("Tuoi gia\n");
    }
}

void thong_tin_vat_nuoi() {
    int n;
    float can_nang[n];
    printf("+-----Thong tin vat nuoi-----+");
    printf("Moi nhap so luong vat nuoi: ");
    scanf("%d", &n);

    for(int i=1; i <= n; i++) {
        printf("Nhap can nang cua vat nuoi thu %d : ", i);
        scanf("%d", &can_nang[i]);
    }
    printf("+------Xuat thong tin vat nuoi------+\n");
    printf("So luong vat nuoi la:  %d", n);
    printf("Vat nuoi co can nang lon hon 30 la: ");
    int a=0;
    for(int i=1; i<=n; i++){
        a++;
        if(can_nang[i] > 30) {
            printf("%d", a);
        }
    } printf("vat nuoi co can nang be nhat la: ");
    int dem=0;
    int min=999;
        for(int i=1; i<=n; i++) {
            if(min >= can_nang[i]) {
                min = can_nang[i];
                dem++;
            }
        } printf("%d", dem);
}


int main() {
    char lua_chon;
    for( ; ; ){
        menu();
        printf("\nMoi ban nhap lua chon: ");
        scanf("%c", &lua_chon);
        fflush(stdin);
        switch (lua_chon){
            case '1': {
                thong_tin();
                break;
            }
            case '2': {
                xep_loai();
                break;
            }
            case '3': {
                thong_tin_vat_nuoi();
                break;
            }
            case '0': {
                return 0;
            }
        }
    }
}
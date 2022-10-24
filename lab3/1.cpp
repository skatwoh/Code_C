#include <stdio.h>
/*
* @Author: DQK
* @Description: Chuong trinh hien thi menu
*/
void in_lua_chon() {
    printf("\n\t MENU");
    printf("\n1. Hien thi bang cuu chuong 4 ");
    printf("\n2. Tinh hieu");
    printf("\n3. Thoat chuong trinh");
}

/*
* @Author: DQK
* @Description: Hien thi bang cuu chuong 4
*/
void bang_cuu_chuong_4() {
    int i ;
    int n = 0;
    int ket_qua;

    i = 4;
    while (n < 10) { // bat dau vong lap tu 0 den 9 nhan voi 4
        printf(" %d x ", i);
        ket_qua = n * i;// cong thuc
        printf("%d = %d\n", n, ket_qua);
        n++;
    }// ket thuc vong lap
    printf("\n");
}

/*
* @Author: DQK
* @Description: Tinh hieu hai so tu 2 den 7 voi dieu kien chia het cho 4
*/
void tinh_hieu() {
    int a;
    int min = 0;
    int max = 12;
    long int hieu = 0;
    
    printf("\nPHEP TRU TU 2 DEN 10 CHIA HET CHO 4\n");
    for (a = min ; a <= max; a++){ // bat dau vong lap tu 2 den 7
         if (a % 4 == 0)// dieu kien chia het cho 4
         hieu = hieu - a;
        }// ket thuc vong lap 
        printf(" = %ld", hieu);
}
/*
* @Author: DQK
* @Description: Chuong trinh xac nhan
* @Return: Y(1) va N(0)
*/
int xac_nhan_thoat() {
    char xac_nhan;
    for (int i = 1; i > 0 ; i++) {
        fflush(stdin);

        // Nhap ky tu nguoi dung vua nhap
        printf("Ban co chac chan khong(Y/N)? ");
        scanf("%c", &xac_nhan);

        // xet xac nhan nguoi dung vua nhap
        switch (xac_nhan) {
            // Truong hop chon Y
        case 'Y' : {
            return 1; // tra ve ket qua xac nhan
        }
        // truong hop cho N
        case 'N' :{
            return 0; // tra ve ket qua khong xac nhan
        }
        // truong hop nguoi dung khong an Y/N
        // nguoi dung nhap sai
        default: {
            printf("Lua chon khong hop le. Moi nhap lai (Y/N)\n ");
            break;
            }
        }
    }
}

/* 
* @Author: DQK
* @Description: Chon lua chon
*/
int main() {
    char lua_chon;
    for (int i = 1; i > 0 ; i++){ // Lap cho den khi nguoi dung chon thoat
    // Danh sach lua chon cho nguoi dung
        in_lua_chon();

        // Nhap lua chon cua nguoi dung
        printf("\nNhap lua chon: ");
        scanf("%d", &lua_chon);

        // Xet lua chon
        switch (lua_chon) {
            case 1: { // neu nguoi chon 1
                bang_cuu_chuong_4();
                break;
            }
            case 2: { // neu nguoi chon 2
                tinh_hieu();
                break;
            }
            case 3: { // neu nguoi chon 3
                // thi thoat chuong trinh <=> ket thuc ham main
                if (xac_nhan_thoat() == 1) { // neu nguoi dung xac nhan
                    return 0; // ket thuc ham main
                }
                break;
            }
            default: {
                printf("\n Lua chon khong hop le. Moi nhap lai");
                break;
            }
        }
    }
}
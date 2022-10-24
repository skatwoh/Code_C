#include <stdio.h>

int xac_nhan_thoat() {
    char xac_nhan;
    for (xac_nhan)
     {
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

int main() {
    int lua_chon;
    for (xac_nhan) { // Lap cho den khi nguoi dung chon thoat
    // Danh sach lua chon cho nguoi dung
        xac_nhan_thoat();

        // Nhap lua chon cua nguoi dung
        printf("\nNhap lua chon: ");
        scanf("%d", &lua_chon);

        // Xet lua chon
        switch (lua_chon) {
            case 1: { // neu nguoi chon 1
                printf("\nDo 1...");
                break;
            }
            case 2: { // neu nguoi chon 2
                printf("\nDo 2...");
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
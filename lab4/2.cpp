#include <stdio.h>
#include <string.h>
#include <conio.h>

struct Sinhvien {
    char Hoten[100];
    char MSSV[100];
    int so_lan_hoc_1;
    int so_lan_hoc_2;
    int so_lan_hoc_3;
    int so_lan_hoc_TB;
};

struct Sinhvien s[1000];
int n=0;

void in_lua_chon() {
    printf("\t\nMenu");
    printf("\n1. Hien thi danh sach da nhap");
    printf("\n2. Hien thi thong tin theo vi tri truyen vao");
    printf("\n3. Thay doi thong tin theo vi tri truyen vao");
    printf("\n4. Tim gia tri lon nhat va hien thi vi tri tuong ung");
    printf("\n5. Tinh gia tri trung binh");
    printf("\n6. Dem so luong phan tu theo so chan");
    printf("\n7. Thoat");
}

void nhap_sinh_vien() {
    int n;
    int i;
    printf("Nhap so sinh vien: ");
    scanf("%d", &n);
    for(i = 0; i < n ; i++) {
    printf("\nSinh vien thu %d", i);
    printf("\nHo ten: ");
    fflush(stdin);
    gets(s[n].Hoten);
    printf("\nMSSV: ");
    fflush(stdin);
    gets(s[n].MSSV);
    printf("\nSo lan hoc 1: ");
    scanf("%d", &s[n].so_lan_hoc_1);
    printf("\nSo lan hoc 2: ");
    scanf("%d", &s[n].so_lan_hoc_2);
    printf("\nSo lan hoc 3: ");
    scanf("%d", &s[n].so_lan_hoc_3);
    }
}
void in_sinh_vien() {
    printf("\n%s \t %s \t %d \t %d \t %d\n",s->Hoten,s->MSSV,s->so_lan_hoc_1,s->so_lan_hoc_2,s->so_lan_hoc_3);
}
void Hien_thi_danh_sach_sinh_vien() {
    printf("\n%s \t %s \t %d \t %d \t %d\n","MSSV","Ho Ten","So lan hoc 1","So lan hoc 2","So lan hoc 3");
    printf("\n");
    int i;
   for (i=0;i<n;i++) {
       in_sinh_vien();
   }
}

void hien_thi_theo_vi_tri(){
    int i, n;
    int a;
    printf("Nhap vi tri can tim ");
    scanf("%d", &a);
    for(i=0;i<n;i++) {
        printf("\n%s \t %s \t %d \t %d \t %d\n","MSSV","Ho Ten","So lan hoc 1","So lan hoc 2","So lan hoc 3");
        printf("\n%s \t %s \t %d \t %d \t %d\n",s[i].MSSV,s[i].Hoten,s[i].so_lan_hoc_1,s[i].so_lan_hoc_2,s[i].so_lan_hoc_3);
    }
}

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

int main() {
    nhap_sinh_vien();
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
                Hien_thi_danh_sach_sinh_vien();
                break;
            }
            case 2: {
                hien_thi_theo_vi_tri();
                break;
            }
            case 3: {
                if (xac_nhan_thoat() == 1) { // neu nguoi dung xac nhan
                    return 0; // ket thuc ham main
                }
                break;
            }
        }
    }
}
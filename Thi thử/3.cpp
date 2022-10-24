#include <stdio.h>
#include <stdlib.h>

void in_lua_chon() {
    printf("+--------MENU---------");
    printf("\n1. Thong tin ca nhan");
    printf("\n2. Xep loai nhan vien");
    printf("\n3. Thong tin vat nuoi");
    printf("\n0. Thoat");
}

void bai_1() {
	char dat_nuoc[50],thanh_pho[30],duong[30];
	int so_nha;
	printf("Nhap dat nuoc: ");
	gets(dat_nuoc); 
	printf("Nhap thanh pho: ");
	gets(thanh_pho); 
	printf("Nhap duong: ");
	gets(duong); 
	printf("Nhap so nha: ");
	scanf("%d" , &so_nha);
	printf("Thong tin vua nhap la: so nha %d - duong %s - %s - %s",so_nha,duong,thanh_pho); 
}

void xep_loai() {
    int nam;
    printf("Moi ban nhap nam: ");
    scanf("%d", &nam);
    int tuoi= 2021-nam;
    if(tuoi>0 && tuoi<18) {
        printf("Tuoi tre");
    } else if(tuoi>=18 && tuoi<= 55) {
        printf("\nTuoi lao dong");
    } else {
        printf("\nTuoi gia");
    }
}

struct vn{
    char ten_vat_nuoi[50];
    int can_nang;
};

void nhap_thong_tin_vat(vn ds[], int n) {
    int i;
    for(i=1; i<=n; i++){
        printf("Ten vat nuoi: ");
        scanf("%s", &ds[i].ten_vat_nuoi);
        printf("\nCan nang: ");
        scanf("%d", &ds[i].can_nang);
    }
}

void in_thong_tin_vat_nuoi(vn ds[], int n) {
    int i;
    while(i<=n) {
        printf("Vat nuoi thu %d có Ten %s, Can nang %d", i, ds[i].ten_vat_nuoi, ds[i].can_nang);
        i++;
    }
}

void dem(vn ds[], int n) {
    int a=n;
    int cn=0;
    for(int i=1; i <= a; i++) {
        if(ds[i].can_nang > 30) {
            cn++;
        }
    }
    printf("So vat nuoi co can nang lon hon 30 la: %d", cn);
}

void tim_gia_tri(vn ds[], int n){
    int i;
    int vitri=0;
    int min=999;
    for(i=1; i<=n; i++) {
        if(min >= ds[i].can_nang) {
            min = ds[i].can_nang;
            vitri++;
        }
    }
    printf("So can nang nho nhat la: %d, nam o vi tri %d", min, vitri);
}

int xac_nhan_thoat() {
    char xac_nhan;
    do {
        fflush(stdin);

        printf("Ban có chac chan thoat khong?(Y/N) ");
        scanf("%c", &xac_nhan);

        switch(xac_nhan) {
            case 'Y':{
                return 1;
            }
            case 'N':{
                return 0;
            }
            default:{
                printf("Sai cu phap. Moi nhap lai");
                break;
            }
        }
    }while(1);
}

int main() {
    int a;
    int n;
    printf("Moi nhap so vat nuoi: ");
    scanf("%d", &n);
    vn ds[99];
    nhap_thong_tin_vat(ds, n);
    char lua_chon;
    int so_vat_nuoi = n;
    for( ; ; ) {
        in_lua_chon();
        printf("\nMoi nhap lua chon: ");
        scanf("%c", &lua_chon);
        fflush(stdin);
        switch(lua_chon) {
            case 1:{
                bai_1();
                break;
            }
            case 2:{
                xep_loai();
                break;
            }
            case 3:{
                in_thong_tin_vat_nuoi(ds, so_vat_nuoi);
                tim_gia_tri(ds, so_vat_nuoi);
                dem(ds, so_vat_nuoi);
            }
            case 4:{
                if(xac_nhan_thoat()==1){
                    return 0;
                }
                break;
            }
            default:{
                printf("Khong hop le");
                break;
            }
        }
    }
}
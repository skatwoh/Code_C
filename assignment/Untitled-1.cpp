#include <stdio.h>

void in_lua_chon() {
    printf ("\t\nMENU");
	printf ("\n1. Mua chip"); 
	printf ("\n2. Ban chip");
	printf ("\n3. Quay so"); 
	printf ("\n4. Thong tin tai khoan"); 
	printf ("\n5. Thoat");
}

void mua_chip() {
    int chip = 0;
    float tien = 10;
    int chip_mua;
    float tien_mua_chip;
    float tien_hien_tai;

    printf("Moi nhap so chip muon mua: ");
    scanf("%d", &chip_mua);
       
    if(chip_mua <= 0) {
        printf("So chip mua khong hop le!!!");
    }
    float B;
    float mua(chip_mua, tien) {
        chip = chip + chip_mua;
        tien_mua_chip = chip_mua * 0.25;
        tien_hien_tai = tien - tien_mua_chip;
    }
    B = mua(chip_mua, tien);
    if(B == 0 ) {
        printf("Ban can nap them tien de mua!\n");
    }
    if(B != 0) {
        chip = chip + chip_mua;
        tien_mua_chip = chip_mua * 0.25;
        tien_hien_tai = tien - tien_mua_chip;
        printf("Ban hien co %.2f $ va %.0d chip\n", tien, chip);
    }
}

int main() {
    in_lua_chon();
    mua_chip();
}
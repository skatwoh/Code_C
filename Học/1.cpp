#include <stdio.h>

int main() {
    int aye, eya;
    printf("Anh co yeu em khong? ");
    scanf("%d", &aye);
    printf("Em co yeu anh khong? ");
    scanf("%d", &eya);


    int thanh_doi = aye && eya;
    int don_phuong = aye || eya;
    if (thanh_doi) {
        printf("That tuyet voi. Den voi nhau di!!!");
    }
    else if (don_phuong) {
        printf("Trong cay si thoi!!!");
    }
    else{
        printf("Chuc ban may man lan sau");
    }
}
#include <stdio.h>

/*
* So do lop
    1   2   3 <=> [1, 2, 3] = m1
    4   5   6 <=> [4, 5, 6] = m2
    7   8   9 <=> [7, 8, 9] = m3
    m = [m1,m2,m3]
        = [ [1,2,3]
            [4,5,6]
            [7,8,9]
            ]
*/

int main() {
    int day = 3;
    int hang = 3;
    int so_do_lop[hang][day];

    int i,j;
    //Gan gia tri
    int stt = 1;
    for(i = 0; i < hang; i++) {
        for(j = 0; j < day; j++){
            so_do_lop[i][j] = stt++;
        }
    }

    // Thay doi vi tri
    int luu_tam = so_do_lop[0][0];// so 1 -> tam
    so_do_lop[0][0] = so_do_lop[2][2];// so 9 -> so 1
    so_do_lop[2][2] = luu_tam;

    // In ma tran
    for(i = 0; i < hang; i++) {
        printf("\t");
        for(j = 0; j < day; j++) {
            printf("%d\t", so_do_lop[i][j]);
        }
        printf("\n");
    }
}
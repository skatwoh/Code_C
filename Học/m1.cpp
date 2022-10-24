#include <stdio.h>

void vi_du_2() {
    printf("Vi du 2: \n");
    char noi_dung[12];
    noi_dung[0] = 'H';
    noi_dung[1] = 'e';
    noi_dung[2] = 'l';
    noi_dung[3] = 'l';
    noi_dung[4] = 'o';
    noi_dung[5] = ' ';
    noi_dung[6] = 'W';
    noi_dung[7] = 'o';
    noi_dung[8] = 'r';
    noi_dung[9] = 'l';
    noi_dung[10] = 'd';
    //noi_dung[11] = '/0';
    printf("%s", noi_dung);
    printf("\n");
}

void vi_du_1() {
    printf("Vi du 1: ");
    char noi_dung[12] = "Hello World";
    printf("%s", noi_dung);

    for (int i = 0; i < 12; i++) {
        printf("%c(%d)", noi_dung[i], noi_dung[i]);
    }
    printf("\n");
}

int main() {
    vi_du_1();
    vi_du_2();
}
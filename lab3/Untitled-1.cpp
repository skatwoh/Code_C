#include <stdio.h>

void tinh_hieu() {
    int a;
    int b;
    int hieu1;
    int hieu2;

a =1;
b =1;
    do {
        printf("\nPHEP TRU TU 2 DEN 7 CHIA HET CHO 4\n", a);
        
            hieu1 = a - b;// cong thuc
            hieu2 = b - a;
            a++;
            b++;
            if(hieu1 % 2 ==0 && hieu2 % 2 == 0) { // dieu kien chia het cho 4
                printf("%d - %d = %d\n", a, b, hieu1, hieu2);
            }
        } while(a<=7, b<=7);
}
 int main() {
     tinh_hieu();
 }
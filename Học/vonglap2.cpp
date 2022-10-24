#include <stdio.h>

// CHUONG TRINH IN GIAI THUA n!
// n! = 1 * 2 * 3 * ... * n

// C1: Su dung vong for
void in_giai_thua_c1(int n) {
    printf("Cach 1 - For:\n\t");
    int i;
    long int giai_thua = 1; // Ket qua phep giai thua, khoi dau bang 1
    printf("%d! = 1 ", n);
    for(i = 1; i <= n; i++) {// Chay tu 2 den n
        printf(" x %d", i);
        giai_thua = giai_thua * i;// Nhan so tiep theo voi gia thua
    }
    printf(" = %ld", giai_thua);
    printf("\n");
}

// C2: Su dung vong while
void in_giai_thua_c2(int n) {
    printf("Cach 2 - While:\n\t");
    int i;
    long int giai_thua = 1;
    printf("%d! = 1", n);

    i = 2;
    while (i <= n) {
    printf(" x %d", i);
    giai_thua = giai_thua * i;
    i++;
    }
    printf(" = %ld", giai_thua);
    printf("\n");
    
}
// C3: Su dung vong Do....While
void in_giai_thua_c3(int n) {
    printf("Cach 3 - Do...While:\n\t");
    int i;
    long int giai_thua = 1;
    printf("%d! = 1", n);

    i = 2;
    do {
        printf(" x %d", i);
        giai_thua = giai_thua * i;
        i++;
    } while (i <= n);
    printf(" = %ld", giai_thua);
    printf("\n");    
}
    
int main() {
    int n = 10;
    in_giai_thua_c1(n);
    in_giai_thua_c2(n);
    in_giai_thua_c3(n);
}
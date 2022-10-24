#include <stdio.h>

int main(){
    unsigned long int canh_1, canh_2, canh_3, duong_cao;// canh, chieu cao
    unsigned long int P, S; // Chu vi, Dien tich
    
    printf("Moi nhap canh 1:\n ");
    scanf("%lu", &canh_1);
 
    printf("Moi nhap canh 2:\n ");
     scanf("%lu", &canh_2);
   
    printf("Moi nhap canh 3:\n ");
     scanf("%lu", &canh_3);
    
    printf("Moi nhap duong cao:\n ");
     scanf("%lu", &duong_cao);
    
    P = canh_1 + canh_2 + canh_3;
    S = 1/2 * duong_cao * canh_3;

    printf("Chu vi tam giac la: %lu", P);
    printf("Dien tich tam giac la: %lu", S);

    return 0;
}
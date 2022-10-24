#include <stdio.h>\

// Lam truoc check sau
void cach_1(int gioi_han) {
    int dem = 1;
    do {
        printf("%d", dem++);
    }while (dem <= gioi_han); // Lap cho den khi lon hon gioi han
}    

// Lam sau check truoc
void cach_2(int gioi_han){
    int dem = 1;
    while (dem <= gioi_han) { // Lap cho den khi lon hon giai han
        printf("%d", dem++);
    }
}

void cach_3(int gioi_han) {
    int dem;
    for(dem = 1; dem <= gioi_han; dem++){
        printf("%d", dem);
    }
}

void cach_3_1(int gioi_han) {
    int dem;
    for( ; dem <= gioi_han; dem++){
        printf("%d", dem);
    }
}

void cach_3_2(int gioi_han) {
    int dem;
    for( ; dem <= gioi_han; ){
        printf("%d", dem);
    }
}

void cach_3_3(int gioi_han) {
    int dem = 1;
    for( ; ; ){// Vo han
        if (dem <= gioi_han) {
            printf("%d", dem);
            dem = dem + 2;
        } else { // Thoat ra neu vuot qua gioi han
            break;
        }
    }
}

void in_chan_cach_1(int gioi_han) {
    int dem;
    for(dem = 1; dem <= gioi_han; dem++){
        if (dem % 2 == 0) {
            printf("%d", dem);
        }
    }
}

void in_chan_cach_2(int gioi_han){
    int dem;
    for(dem = 2; dem <= gioi_han; dem+=2){
        printf("%d", dem);
    }
}

void in_le(int gioi_han){
    int dem;
    for(dem = 1; dem <= gioi_han; dem++){
        if (dem % 2 != 0){
            printf("%d", dem);
        }
    }
}

int main() {
    printf("CHUONG TRINH IN RA CAC SO TU 1 DEN N\n");
    int N;
    printf("Moi nhap N: ");
    scanf("%d", &N);
    in_le(N);
}
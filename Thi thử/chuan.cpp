#include <stdio.h>

void menu() {
	printf ("MENU");
	printf ("\n1. Thong tin ca nhan");
	printf ("\n2. Tinh tong tu 1 den n");
	printf ("\n3. Thong tin Tivi");
	printf ("\n0. Thoat"); 
} 

void thong_tin_cua_minh(){
	char hoten[50], MSSV[50];
	float diem;
	printf("\n Moi nhap vao ten:");
	fflush(stdin);
	gets(hoten); 
	printf("\n Moi nhap MSSV:");
	fflush(stdin);
	gets(MSSV);
	printf("\n Moi nhap diem:");
	scanf("%f", &diem);
	 
	printf("\n Thong tin vua nhap:");
	printf("\n Ho ten:");
	puts(hoten);
	printf("\n MSSV");
	puts(MSSV);
	printf("\n Diem: %.1f \n", diem);

} 

int xeploai() {
    int tuoi;
    printf("Moi ban nhap tuoi nhan vien: ");
    scanf("%d", &tuoi);
    if(tuoi>0 && tuoi <18){
        printf("Tuoi tre\n");
    } else if (tuoi >= 18 && tuoi <= 55) {
        printf("Tuoi lao dong\n");
    } else if (tuoi > 55) {
        printf("Tuoi gia\n");
    } else {
        printf("Khong hop le\n");
    }
}

void vatnuoi() {
	int n;
	int i; 
	int cannang[n];
	printf ("Moi nhap so luong vat nuoi:");
	scanf ("%d", &n);
	for ( i =0; i<n; i++) {
		printf ("\nCan nang vat nuoi thu %d la: ", i);
		scanf ("%d", &cannang[n]); 
	}
	int min = cannang[0];
	for (i=0; i<n; i++) {
		if (min > cannang[i]) {
			min = cannang[i];
		}
	}
	 
	int a;
	int slh=0;
	for(int i=1; i<=a; i++){
		if(cannang[i] > 30){
			slh++;
		} 
	
	printf  ("\nXuat thong tin vat nuoi:");
	printf ("\nSo luong vat nuoi la: %d", n);
	printf  ("\nVat nuoi can nang > 30 la: %d", slh); 
	printf ("\nVat nuoi co can nang nho nhat: %d",min); 
} 
}
int main () {
	menu(); 
	do {
		int luachon;
		printf ("\nMoi ban nhap lua chon: ");
		scanf ("%d", &luachon);
		fflush(stdin);
		switch (luachon) {
			case 1: {
				thong_tin_cua_minh(); 
				break;
			}
			case 2: {
				xeploai(); 
				break;
			} 
			case 3: {
				vatnuoi(); 
				break;
			} 
			case 0: {
				return 0;
				break;
			}  
			default: {
				printf ("Lua chon khong hop le. Vui long nhap lai:"); 
				break;
			} 
			 
		}
		
	} while (1); 
} 
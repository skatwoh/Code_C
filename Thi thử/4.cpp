#include <stdio.h>

void menu() {
	printf ("\n--------Menu--------");
	printf ("\n1. Thong tin");
	printf ("\n2. Do tuoi");
	printf ("\n3. Thong tin vat nuoi");
	printf ("\n4. Thoat\n"); 
} 

void thongtin() {
	char ten[50], diachi[50];
	int sodienthoai;
	printf ("\nNhap ho ten: ");
	fflush(stdin); 
	gets(ten);
	printf ("\nNhap dia chi: ");
	fflush(stdin);
	gets(diachi);
	printf ("\nNhap so dien thoai: ");
	scanf ("%d", &sodienthoai);
	
	printf ("\nThong tin ca nhan la:");
	printf ("\nHo ten:");
	puts(ten);
	printf ("\nDia chi: ");
	puts(diachi);
	printf ("\nSo dien thoai: %d", sodienthoai);  
	
} 
int dotuoi() {
	int namsinh; 
	int sotuoi;
	printf ("\nNhap nam sinh cua ban: ");
	scanf ("%d", &namsinh); 
	sotuoi = 2021 - namsinh;
	printf ("Ban %d tuoi\n", sotuoi); 
	if (sotuoi< 18) {
		printf ("Tuoi tre"); 
	} 
	else if (sotuoi>=18 && sotuoi <=55) {
		printf ("Tuoi lao dong"); 
	} 
	else {
		printf ("Tuoi gia"); 
	} 
} 

void bai_3(){
	int n;
	float can_nang[n];
	printf("------Thong tin vat nuoi------\n");
	printf("Moi nhap so luong vat nuoi: ");
	scanf("%d",&n);
	for(int i=1; i<=n;i++){
		printf("Nhap can nang vat nuoi thu %d :",i);
		scanf("%f",&can_nang[i]);
	}
	
	int a=0;
	for(int i=1; i<=n; i++){
		a++;
		if(can_nang[i]>=30){
		}
	}
	printf("Vat nuoi co can nang lon hon 30 la: %d", a)
	
	int dem=0;
	int min=999;
	for(int i=1; i<=n; i++){
		dem++;
		if(min >= can_nang[i]){
			min= can_nang[i];
			printf("  %d", dem);
		}
	}
	
}
int thoat() {
	char xac_nhan;
	while(1) {
		fflush(stdin);
		printf("Ban co muon thoat (Y/N)?"); scanf(" %c", &xac_nhan); 
		switch(xac_nhan) {
			case 'Y':{
				return 1; 
				break;
			}
			case 'N':{
				return 0; 
				break;
			}
			default: {
				printf("Lua chon ko hop le, moi ban chon lai (Y/N)!"); 
				break;
			} 
		} 
	} 
} 	


int main(){
	char lua_chon;
	while(1){
		menu();
		printf("Moi ban nhap lua chon: ");
		scanf("%d",&lua_chon);
		fflush(stdin);
		switch(lua_chon){
			case 1 :{
				thongtin();
				break;
			}
			case 2 :{
				dotuoi();
				break;
			}
			case 3 :{
				bai_3();
				break;
			}
			case 0 :{
				if(thoat() == 1){
					return 0;
				}
				break;
			}
			default: {
				printf("Lua chon khong hop le, xin vui long lua chon lai!!\n");
				break;
			}
		}
		
	}
}
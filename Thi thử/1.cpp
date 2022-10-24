#include<stdio.h>

void menu() {
	printf("+++++++++Menu++++++++++\n"); 
	printf("1.Thong tin ca nhan\n"); 
	printf("2.Tinh tong tu 1 den N\n"); 
	printf("3.Thong tin TV\n");
	printf("0.Thoat\n"); 
	printf("------------------------\n"); 
} 

int tong(int n, int SL[]) {
	int tong = 0;
	for(int i=1; i<=n; i++) {
		tong += i; 
	}  
	printf("Tong cac so tu 1 den %d la: %d\n", n, tong); 
	return 0; 
} 

int so(int n, int sl[]){

		if(n%2==0) 
			printf("So ban vua nhap la so chan!\n"); 
		if(n%2==1)
			printf("So ban vua nhap la so le!\n"); 
 
} 

int nhap(int n, int SL[]) { 
	for(int i=1; i<=n; i++){
		printf("%d: \t", i); 	scanf("%d", &SL[i]);
	}  
} 

int xuat(int n, int SL[]) {
	for(int i = 1; i <= n; i++) {
		printf("kich co TV thu %d = %d (inch)\n", i, SL[i]);
	}
}
float trung_binh(int n, int SL[]) {
	float tb, tong = 0;
	for(int i=1; i<=n; i++) {
		tong += SL[i];
		tb = tong/n; 
	}  n++;
	printf("Trung binh kich co ti vi la: %.2f\n", tb); 
	return 0; 
} 

int min(int n, int SL[]) {
	int min=SL[0]; 
 	int min_num;
	for(int i=1; i<=n; i++) {
		if(SL[i]<min) {
			SL[i]=min;
			min_num=1; 
		} 
	} 
	for(int j=1; j<=n; j++) {
		if(SL[j]<min) {
			
			min_num=1; 
		}
	} 
	printf("Ti vi co kich co nho nhat la: %d", min_num, min); 
	return 0; 
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

int main() {
	int n, SL[50];
	int lua_chon; 
	
	char ho_ten[30];
	printf("Moi ban nhap ho ten:\t");
	fflush(stdin); fgets(ho_ten, sizeof(ho_ten), stdin);
	
	char mssv[10];
	printf("Moi ban nhap ma so sinh vien:\t"); scanf(" %s", &mssv);
	
	char diem[10];
	printf("Moi ban nhap diem:\t"); scanf ("%s", &diem);
	while(1) {
		fflush(stdin); 
		menu();
		printf("Moi ban nhap lua chon: "); scanf("%d", &lua_chon); 
		switch(lua_chon) {
			case 1: {
				printf("\n");
				printf("mssv:%s\nHo ten:%sDiem: %s\n", mssv, ho_ten, diem);  
				break;
			} 
			case 2:{
				printf("Moi ban nhap so bat ki:\t"); scanf("%d", &n);
				tong(n, SL);
				so(n, SL); 
				break;
			} 
			case 3: {
				printf("Moi ban nhap so luong TV: \n");	scanf("%d", &n);
				printf("Moi ban nhap kich co TV(inch)\n");
				nhap(n, SL);
				printf("So luong TV la: %d\n", n);
				trung_binh(n, SL);
				min(n, SL); 
				break;
			} 
			case 0: {
				if(thoat()==1) {
					return 0; 
				} 
				break;
			} 
			default: {
				printf("Lua chon ko hop le, moi ban nhap lai!(0--3)"); 
				break;
			} 
		} 
	}  
} 
#include<stdio.h>
#include<conio.h>
#include <stdlib.h> 

/*
* @Author:DQK
* @Description: hien lua chon 
*/
void in_lua_chon(){
    printf("\t\n MENU");
	printf("\n1. Hien thi danh sach.");
	printf("\n2. Hien thi thong tin ban can tim.");
	printf("\n3. Thay doi thong tin.");
	printf("\n4. Tim gia tri lon nhat va vi tri tuong ung.");
	printf("\n5. Tinh gia tri trung binh.");
	printf("\n6. Dem so luong phan tu theo dieu kien chan.");
	printf("\n7. Thoat chuong trinh.");
}

struct Sinhvien{
    char ten[30];
    char mssv[10];
    int solanhoc;
};
typedef Sinhvien Sv;

/*
* @Author:DQK
* @Description: Nhap danh sach sinh vien
*/
void nhap_ds(Sv ds[], int n){
	int i;
	for(i=1; i<=n; i++){
		printf("Xin moi nhap thong tin SV thu %d\n", i);
        printf("Ten: ");
		scanf(" %s", &ds[i].ten);
		printf("MSSV: ");
		scanf(" %s", &ds[i].mssv);
		printf("So lan hoc: ");
		scanf("%d", &ds[i].solanhoc);
	}
}

/*
* @Author:DQK
* @Description: In danh sach sinh vien
*/
void in_ds(Sv ds[], int n){
	int i=1;
	while(i<=n){
		printf("Ban thu %d co Ten: %s, MSSV: %s, So lan hoc: %d \n", i,ds[i].ten, ds[i].mssv, ds[i].solanhoc);
		i++;
	}
};

/*
* @Author:DQK
* @Description: Tim sinh vien theo vi tri
*/
void tim_gia_tri(Sv ds[], int n){
	int max=1;
	int vi_tri=0;
	for(int i=1; i<=n; i++){
		if(max< ds[i].solanhoc){
			max = ds[i].solanhoc;
			vi_tri++;
		}
	} 
	printf("So lan hoc cao nhat la: %d, nam o vi tri so: %d\n", max, vi_tri);
}

/*
* @Author:DQK
* @Description: Tinh so lan hoc trung binh
*/
void trung_binh(Sv ds[], int n){
	int b = n;
	float so_lan_hoc_trung_binh;
	float tong = 0;
	int i;
	for(i=1; i<= b; i++){
		tong = tong + ds[i].solanhoc;
	};
	so_lan_hoc_trung_binh = tong / n;
	printf("Diem trung binh cua %d hoc vien la: %.2f\n", n, so_lan_hoc_trung_binh);
}

/*
* @Author:DQK
* @Description: So phan tu chan 
*/
void dem_so_hoc_sinh_co_so_lan_hoc_chan(Sv ds[], int n){
	int b=n;
	int solanhoc=0;
	for(int i=1; i<=b; i++){
		if(ds[i].solanhoc % 2 == 0){
			solanhoc++;
		}
	}
	printf("So hoc vien co so lan hoc chan la: %d\n", solanhoc);
}

/*
* @Author:DQK
* @Description: Thoat chuong trinh 
*/
int xac_nhan_thoat(){ 
 	char xac_nhan;
	do{ 
		fflush(stdin);
		
		// Nhap ky tu nguoi dung vua nhap
		printf("Ban co chac chan khong (Y/N)? ");
		scanf("%c", &xac_nhan);
		
		//Xet xac nhan nguoi dung vua nhap
		switch(xac_nhan){
			// Truong hop chon Y
			case 'Y':{
				return 1; // tra ve ket qua xac nhan 
			}
			//Truong hop chon n
			case 'N':{
				return 0; // tra ve ket qua khong xac nhan
			}
			// Truong hop nguoi dung khong an Y/N
			// Nguoi dung nhap sai
			default:{
				printf("Lua chon khong hop le. Moi nhap lai!!!\n ");
				break;
			}
		}
	}while(1); // lap den khi nao chon thoat hoac tro lai
}

/*
* @Author:DQK
* @Description: Chon lua chon
*/
int main() {
	int vi_tri;
	int n;
	printf("Nhao so luong sinh vien: ");
	scanf("%d", &n);
	Sv ds[99];
	// Nhap danh sach hoc vien
	nhap_ds(ds, n);
	char lua_chon;
	int so_sinh_vien = n;
	// Thuc hien vong lap den khi chon thoat
	for( ; ; ){
		in_lua_chon(); // Hien thi menu chuong trinh
		printf("\nXin moi ban nhap lua chon: ");
		scanf("%s", &lua_chon); 
		fflush(stdin);
		switch(lua_chon){
			case '1':{
				in_ds(ds, so_sinh_vien);
				break;
			}
			case '2':{ // [2]: Hien thi thong tin ban can tim
				int vi_tri;
				printf("Xin moi ban nhap vi tri can tim: ");
				scanf("%d", &vi_tri);
				printf("Tai vi tri %d co: <Ten: %s, MSSV: %s, So lan hoc: %d>\n", vi_tri, ds[vi_tri].ten, ds[vi_tri].mssv, ds[vi_tri].solanhoc );
				break;
			}
			case '3':{
				int vi_tri;
				printf("Nhap vi tri hoc vien can thay doi: ");
				scanf("%d", &vi_tri);
					char lua_chon;
				while(1){
					printf("Thay doi:\n");
					printf("	1. Ten.\n");
					printf("	2. MSSV.\n");
					printf("	3. So lan hoc.\n");
					printf("\nMoi ban nhap lua chon: ");
					scanf(" %c", &lua_chon);
					switch(lua_chon){
						case'1':{
							printf("Ten :");
							scanf(" %s", &ds[vi_tri].ten);
							break;
						}
						case'2':{
							printf("MSSV :");
							scanf(" %s", &ds[vi_tri].mssv);
							break;
						}
						case'3':{
							printf("So lan hoc :");
							scanf(" %d", &ds[vi_tri].solanhoc);
							break;
						}
						default : {
							printf ("Khong hop le vui long chon lai!!\n");
							break;
						}
					}
					break;
				}
			}
			case '4':{
				tim_gia_tri(ds, so_sinh_vien);
				break;
			}
			case '5':{
				trung_binh(ds, so_sinh_vien);
				break;
			}
			case '6':{
				dem_so_hoc_sinh_co_so_lan_hoc_chan(ds, so_sinh_vien);
				break;
			}
			case '7':{ // Neu nguoi dung chon 5
				// Thi thoat chuong trinh <=> ket thung ham main
				if(xac_nhan_thoat() ==1 ){ // Neu nguoi dung xac nhan
					return 0; // Ket thuc ham main
			}
				}
				break;
			default : {
				printf ("Khong hop le vui long chon lai!!\n");
				break;
			}
		}	
	}			
}
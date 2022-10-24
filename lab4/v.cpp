#include<stdio.h>
#include<conio.h>
#include <stdlib.h> 

// Hien thi ra menu
void menu(){
	printf(" \t\n MENU");
	printf("\n1. Hien thi danh sach.");
	printf("\n2. Hien thi thong tin ban can tim.");
	printf("\n3. Thay doi thong tin.");
	printf("\n4. Tim gia tri lon nhat va vi tri tuong ung.");
	printf("\n5. Tinh gia tri trung binh.");
	printf("\n6. Dem so luong phan tu theo dieu kien chan.");
	printf("\n7. Thoat chuong trinh.");
}

// Khai bao
struct ds{
    char ten[30];
    char mssv[10];
    int solanhoc;
};


void nhap_ds(ds danh_sach[], int so_luong){
	int i;
	for(i=1; i<=so_luong; i++){
		printf("Xin moi nhap thong tin SV thu %d\n", i );
        printf("Ten: ");
		scanf(" %s", &danh_sach[i].ten);
		printf("MSSV: ");
		scanf(" %s", &danh_sach[i].mssv);
		printf("So lan hoc: ");
		scanf("%d", &danh_sach[i].solanhoc);
	}
}


void in_ds(ds danh_sach[], int so_luong){
	int i=1;
	while(i<=so_luong){
		printf("Ban thu %d co Ten: %s, MSSV: %s, So lan hoc: %d \n", i,danh_sach[i].ten, danh_sach[i].mssv, danh_sach[i].solanhoc);
		i++;
	}
};

void tim_gia_tri(ds danh_sach[], int so_luong){
	int max=1;
	int vi_tri=0;
	for(int i=1; i<=so_luong; i++){
		if(max< danh_sach[i].solanhoc){
			max = danh_sach[i].solanhoc;
			vi_tri++;
		}
	}
	printf("So lan hoc cao nhat la: %d, nam o vi tri so: %d", max, vi_tri);
}


void trung_binh(ds danh_sach[], int so_luong){
	int a = so_luong;
	float so_lan_hoc_TB;
	float tong = 0;
	int i;
	for(i=1; i<= a; i++){
		tong = tong + danh_sach[i].solanhoc;
	};
	so_lan_hoc_TB = tong / so_luong;
	printf("So lan hoc TB cua %d hoc vien la: %.2f", so_luong, so_lan_hoc_TB);
}


void dem(ds danh_sach[], int so_luong){
	int a=so_luong;
	int slh=0;
	for(int i=1; i<=a; i++){
		if(danh_sach[i].solanhoc > 5){
			slh++;
		}
	}
	printf("So hoc vien co So lan hoc chan la: %d", slh);
}


int xac_nhan_thoat(){ 
 	char xac_nhan;
	do{ 
		fflush(stdin);
		
		// Nhap ky tu nguoi dung vua nhap
		printf("Ban co chac chan khong (y/n)? ");
		scanf("%c", &xac_nhan);
		
		//Xet xac nhan nguoi dung vua nhap
		switch(xac_nhan){
			// Truong hop chon y
			case 'y':{
				return 1; // tra ve ket qua xac nhan 
			}
			//Truong hop chon n
			case 'n':{
				return 0; // tra ve ket qua khong xac nhan
			}
			// Truong hop nguoi dung khong an y/n
			// Nguoi dung nhap sai
			default:{
				printf("Lua chon khong hop le. Chi duoc nhap 'y' hoac 'n' !!!\n ");
				break;
			}
		}
	}while(1); // lap den khi nao chon thoat hoac tro lai
}


int main() {
	int a;
	int so_luong;
	printf("So luong sinh vien: ");
	scanf("%d", &so_luong);
	ds danh_sach[99];
	// Nhap danh sach hoc vien
	nhap_ds(danh_sach, so_luong);
	char lua_chon;
	int so_sinh_vien = so_luong;
	// Thuc hien vong lap den khi chon thoat
	for( ; ; ){
		menu(); // Hien thi menu chuong trinh
		printf("\nXin moi ban nhap lua chon: ");
		scanf("%s", &lua_chon); 
		fflush(stdin);
		switch(lua_chon){
			case '1':{
				in_ds(danh_sach, so_sinh_vien);
				break;
			}
			case '2':{ // [2]: Hien thi thong tin ban can tim
				int vi_tri;
				printf("Xin moi ban nhap vi tri can tim: ");
				scanf("%d", &vi_tri);
				printf("Tai vi tri %d co: [Ten: %s, MSSV: %s, So lan hoc: %d]\n",vi_tri, danh_sach[vi_tri].ten, danh_sach[vi_tri].mssv, danh_sach[vi_tri].solanhoc );
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
					printf("	Nhap lua chon: ");
					scanf(" %c", &lua_chon);
					switch(lua_chon){
						case'1':{
							printf("Doi ten thanh:");
							scanf(" %s", &danh_sach[vi_tri].ten);
							printf("Da doi ten thanh: %s\n",danh_sach[vi_tri].ten );
							break;
						}
						case'2':{
							printf("Doi MSSV thanh:");
							scanf(" %s", &danh_sach[vi_tri].mssv);
							printf("Da doi MSSV thanh: %s\n",danh_sach[vi_tri].mssv );
							break;
						}
						case'3':{
							printf("Doi so lan hoc thanh:");
							scanf(" %d", &danh_sach[vi_tri].solanhoc);
							printf("Da doi so lan hoc thanh: %d\n",danh_sach[vi_tri].solanhoc );
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
				tim_gia_tri(danh_sach, so_sinh_vien);
				break;
			}
			case '5':{
				trung_binh(danh_sach, so_sinh_vien);
				break;
			}
			case '6':{
				dem(danh_sach, so_sinh_vien);
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
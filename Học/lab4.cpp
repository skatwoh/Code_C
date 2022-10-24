#include<stdio.h>
#include<conio.h>
#include <stdlib.h> 

// Hien thi ra menu
void menu(){
	printf(" \n.____CHUONG TRINH QUAN LY DIEM TRUNG BINH CUA HOC VIEN____.");
	printf("\n|---------[1]:Hien thi danh sach.--------------------------|");
	printf("\n|---------[2]:Hien thi thong tin ban can tim.--------------|");
	printf("\n|---------[3]:Thay doi thong tin.--------------------------|");
	printf("\n|---------[4]:Tim gia tri lon nhat va vi tri tuong ung.----|");
	printf("\n|---------[5]:Tinh gia tri trung binh.---------------------|");
	printf("\n|---------[6]:Dem so luong phan tu theo dieu kien le.------|");
	printf("\n|---------[7]:Thoat chuong trinh.--------------------------|");
	printf("\n|__________________________________________________________|");
}

// Khai bao
struct ds{
    char ten[30];
    char mssv[10];
    int diemtb;
};


void nhap_ds(ds danh_sach[], int so_luong){
	int i;
	for(i=1; i<=so_luong; i++){
		printf("Xin moi nhap thong tin SV thu %d, Ten: ",i );
		scanf(" %s", &danh_sach[i].ten);
		printf("                                  MSSV: ");
		scanf(" %s", &danh_sach[i].mssv);
		printf("                                  Diem TB: ");
		scanf("%d", &danh_sach[i].diemtb);
	}
}


void in_ds(ds danh_sach[], int so_luong){
	int i=1;
	while(i<=so_luong){
		printf("Ban thu %d co Ten: %s, MSSV: %s, Diem TB: %d \n", i,danh_sach[i].ten, danh_sach[i].mssv, danh_sach[i].diemtb);
		i++;
	}
};




void tim_gia_tri(ds danh_sach[], int so_luong){
	int max=1;
	int vi_tri=0;
	for(int i=1; i<=so_luong; i++){
		if(max< danh_sach[i].diemtb){
			max = danh_sach[i].diemtb;
			vi_tri++;
		}
	}
	printf("DiemTB cao nhat la: %d, nam o vi tri so: %d", max, vi_tri);
}


void trung_binh(ds danh_sach[], int so_luong){
	int a = so_luong;
	float diem_trung_binh;
	float tong = 0;
	int i;
	for(i=1; i<= a; i++){
		tong = tong + danh_sach[i].diemtb;
	};
	diem_trung_binh = tong / so_luong;
	printf("Diem trung binh cua %d hoc vien la: %.2f", so_luong, diem_trung_binh);
}


void dem(ds danh_sach[], int so_luong){
	int a=so_luong;
	int dtb=0;
	for(int i=1; i<=a; i++){
		if(danh_sach[i].diemtb % 2 != 0){
			dtb++;
		}
	}
	printf("So hoc vien co DiemTB le la: %d", dtb);
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
	int so_hoc_vien = so_luong;
	// Thuc hien vong lap den khi chon thoat
	for( ; ; ){
		menu(); // Hien thi menu chuong trinh
		printf("\nXin moi ban nhap lua chon: ");
		scanf("%s", &lua_chon); 
		fflush(stdin);
		switch(lua_chon){
			case '1':{
				in_ds(danh_sach, so_hoc_vien);
				break;
			}
			case '2':{ // [2]: Hien thi thong tin ban can tim
				int vi_tri;
				printf("Xin moi ban nhap vi tri can tim: ");
				scanf("%d", &vi_tri);
				printf("Tai vi tri %d co: [Ten: %s, MSSV: %s, Diem TB: %d]\n",vi_tri, danh_sach[vi_tri].ten, danh_sach[vi_tri].mssv, danh_sach[vi_tri].diemtb );
				break;
			}
			case '3':{
				int vi_tri;
				printf("Nhap vi tri hoc vien can thay doi: ");
				scanf("%d", &vi_tri);
				printf("Ban thu %d co: [Ten: %s, MSSV: %s, Diem TB: %d]\n", vi_tri,danh_sach[vi_tri].ten, danh_sach[vi_tri].mssv, danh_sach[vi_tri].diemtb);
					char lua_chon;
				while(1){
					printf("Thay doi:\n");
					printf("	1. Ten.\n");
					printf("	2. MSSV.\n");
					printf("	3. DiemTB.\n");
					printf("	Nhap lua chon: ");
					scanf(" %c", &lua_chon);
					switch(lua_chon){
						case'1':{
							printf("		Doi ten thanh:");
							scanf(" %s", &danh_sach[vi_tri].ten);
							printf("		Da doi ten thanh: %s\n",danh_sach[vi_tri].ten );
							break;
						}
						case'2':{
							printf("		Doi MSSV thanh:");
							scanf(" %s", &danh_sach[vi_tri].mssv);
							printf("		Da doi MSSV thanh: %s\n",danh_sach[vi_tri].mssv );
							break;
						}
						case'3':{
							printf("		Doi DiemTB thanh:");
							scanf(" %d", &danh_sach[vi_tri].diemtb);
							printf("		Da doi DiemTB thanh: %d\n",danh_sach[vi_tri].diemtb );
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
			case'4':{
				tim_gia_tri(danh_sach, so_hoc_vien);
				break;
			}
			case '5':{
				trung_binh(danh_sach, so_hoc_vien);
				break;
			}
			case'6':{
				dem(danh_sach, so_hoc_vien);
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

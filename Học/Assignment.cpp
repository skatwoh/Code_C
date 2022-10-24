#include<stdio.h>
#include<stdlib.h> 
#include <time.h>

// So tien va so chip ban ban dau
float tien_hien_co = 10;
char chip_hien_co =0;

// In ra menu cua chuong trinh
void menu(){
	printf("\n\nQUAY SO TRUNG THUONG: ");
	printf("\n1.Mua chip.");
	printf("\n2.Ban chip.");
	printf("\n3.Quay so.");
	printf("\n4.Xem thong tin.");
	printf("\n5.Thoat.");
	printf("\n\n ---------------- \n\n");
}


/*
* @Author: Quanndaph26528
* @Description: mua chip 
*/
void mua_chip(){
	int chip_mua;
	float tien_mua_chip;
	printf("Nhap so chip muon mua($0.25/chip): ");
	scanf("%d", &chip_mua);
	tien_mua_chip = chip_mua * 0.25; // so tien phai tra
	
	if(tien_mua_chip <= tien_hien_co ){ // neu du tien thi thuc hien chuc nang
		tien_hien_co = tien_hien_co - tien_mua_chip; // so tien con lai sau khi thuc hien chuc nang
		chip_hien_co = chip_hien_co + chip_mua; // so chip cua ban sau khi thuc hien chuc nang
		printf("Ban da mua thanh cong %d chip voi so tien la $%.2f", chip_mua, tien_mua_chip);
	} else if(tien_mua_chip > tien_hien_co){ // het tien thi thuc hien chuc nang
		printf("So du khong du, vui long xem so $ truoc khi giao dich!!");
	} else{ // nhap sai
		printf("Ban nhap khong phai so nguyen, vui long lua chon lai!!");
	}
}

/*
* @Author: Quanndaph26528
* @Description: Ban chip
*/
void ban_chip(){
	int chip_ban;
	float tien_ban_chip=0;
	tien_ban_chip = 0.2 * chip_ban; // so tien nhan duoc khi ban chip
	
	if(chip_hien_co >= chip_ban, chip_ban > 0){ // Du chip ban thi thuc hien chuc nang
		printf("Nhap so chip muon ban($0.2/chip): ");
		scanf("%d", &chip_ban);
		chip_hien_co = chip_hien_co - chip_ban; // so chip cua ban sau khi thuc hien chuc nang
		tien_hien_co = tien_hien_co + tien_ban_chip; // so tien cua ban sau khi thuc hien chuc nang
		printf("Ban da ban thanh cong %d chip, va nhan duoc $%.2f", chip_ban, tien_ban_chip);
	}else if(chip_hien_co < chip_ban){ // Khong du chip de ban thi thuc hien chuc nang 
		printf("Khong du chip, vui long kiem tra so chip truoc khi giao dich!!");
	}else{ // Nhap sai
		printf("Ban nhap khong phai so nguyen, vui long lua chon lai!!");
	}
}

/*
* @Author: Quanndaph26528
* @Description: Quay so random tu 1->9 voi 3 phan tu
*/
void quay_so(){
	
	int so[3]; // Mang so nguyen voi 3 phan tu
	int min=1; // random voi min=1
	int max=9; // random voi max = 9
	
	srand((int)time(0));
	
	if(chip_hien_co>0){ // Du so du chip de thuc hien quay so
		chip_hien_co = chip_hien_co - 1; // so chip con lai sau khi quay
		int i; // bien dem
		//Nhap so
		for(i=1; i<=3; i++){ 
			so[i] = min + rand() % (max + 1 - min); // random so
		}
		//In so
		for(i=1; i<=3; i++){ 
			printf("So thu: %d Co gia tri: %d ", i, so[i]);
			printf("\n");
		}
		if(so[1]==so[2]&&so[1]==so[3] && so[2]==so[3] ){ // ca 3 so random giong nhau
			chip_hien_co = chip_hien_co +10; // nhan 10 chip
			printf("xin chuc mung ban da duoc +10 chip");
		} else if (so[1]==so[2] || so[1]==so[3] || so[2]==so[3] ){ // trong 3 so co 2 so giong nhau 
			chip_hien_co = chip_hien_co +3; // nhan them 3 chip
			printf("xin chuc mung ban da duoc +3 chip");
		} else {
			printf("chuc may man lan sau");
		}
	} else{ // Chip khong du
		printf("Ban da het chip de quay!!!");
	}
	

}

/*
* @Author: Quanndaph26528
* @Description: Xem thong tin so xu va so chip ban co
*/
void xem_thong_tin(){
	printf("So tien ban dang co: $ %.2f", tien_hien_co);
	printf("\nSo chip ban dang so huu la: %d chip", chip_hien_co);
}

/*
* @Author: Quanndaph26528
* @Description: dung vong lap do...while de ket thuc chuong trinh
* @return: thoat(y) hoac tro lai (n)
*/
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

/*
* @Author: Quanndaph26528
* @Description: dung vong lap do...while de thuc hien chuong trinh
* @Return: ket thuc chuong trinh (0)
*/
int main(){
	int lua_chon;
	while(1){
		
		menu();
		
		printf("Xin moi ban nhap lua chon: ");
		scanf("%d", &lua_chon);
		fflush(stdin);
		switch(lua_chon){
			case 1:{ // Neu nguoi dung chon 1
				mua_chip(); // Thuc hien chuc nang mua chip
				break;
			}
			case 2:{ // Neu nguoi dung chon 2
				ban_chip(); // Thuc hien chuc nang ban chip
				break;
			}
			case 3:{ // Neu nguoi dung chon 3
				quay_so(); // Thuc hien chuc nang quay so
				break;
			}
			case 4:{ // Neu nguoi dung chon 4
				xem_thong_tin(); // Thuc hien chuc nang xem thong tin
				break;
			}
			case 5:{ // Neu nguoi dung chon 5
				// Thi thoat chuong trinh <=> ket thung ham main
				if(xac_nhan_thoat() ==1 ){ // Neu nguoi dung xac nhan
					return 0; // Ket thuc ham main
				}
				break;
			}
			// Truong hop nguoi dung khong an 1/2/3/4/5
			// Nguoi dung nhap sai			
			default:{
				printf("Lua chon cua ban khong hop le. xin vui long nhap lai!\n");
				break;
			}	
		}
	}
}

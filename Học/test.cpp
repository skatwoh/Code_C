#include<stdio.h>
#include<stdlib.h> 
#include<time.h> 

/*
* @Author:DQK
* @Description: hien lua chon 
*/
void menu() {
	printf ("\t\nMENU");
	printf ("\n1. Mua chip"); 
	printf ("\n2. Ban chip");
	printf ("\n3. Quay so"); 
	printf ("\n4. Thong tin tai khoan"); 
	printf ("\n5. Luu");
	printf ("\n6. Thoat\n");
} 

/*
* @Author:DQK
* @Description: tinh so tien va so chip cua nguoi choi khi mua so chip tuong ung 
* @Return: khong du tien(0) va mua duoc chip(1)
*/
float mua(int chip_mua, float tien) {
	float tien_mua_chip = chip_mua * 0.25;
	if(tien >= tien_mua_chip) {
		return 1;
	} else {
		printf("So chip khong hop le!\n");
	return 0; 
	}
} 

/*
* @Author:DQK
* @Description: tinh so tien va so chip cua nguoi choi khi ban so chip tuong ung 
* @Return: ban duoc chip(1) va khong ban duoc chip(0)
*/
float ban(int chip_ban, int chip, float tien) {
	float tien_ban_chip = chip_ban * 0.2;
	if(chip  >= chip_ban) {
		return 1;
	} else {
		printf("So chip khong hop le!\n");
	return 0;
	} 
}

/*
* @Author:DQK
* @Description: Quay so ngau nhien voi 3 chu so tu 1--9 
*/
void quay_so(){
	int chip ;
	int so[3]; 
	int min=1; 
	int max=9; 
	
	srand((int)time(0));
	
	if(chip>0){ 
		chip = chip - 1;
		int i;
		
		for(i=1; i<=3; i++){ 
			so[i] = min + rand() % (max + 1 - min);
		}
		for(i=1; i<=3; i++){ 
			printf("So thu: %d Co gia tri: %d ", i, so[i]);
			printf("\n");
		}
		if(so[1]==so[2]&&so[1]==so[3] && so[2]==so[3] ){
			chip = chip +10; 
			printf("xin chuc mung ban da duoc +10 chip");
		} else if (so[1]==so[2] || so[1]==so[3] || so[2]==so[3] ){ 
			chip = chip +3; 
			printf("xin chuc mung ban da duoc +3 chip");
		} else {
			printf("chuc may man lan sau");
		}
	} else{
		printf("Ban da het chip de quay!!!");
	}
	

}

/*
* @Author:DQK
* @Description: xac nhan thoat
* @Return: Y(1); N(0)
*/
int xac_nhan_thoat() {
	char xac_nhan; 
	do {
		fflush(stdin); 
		printf("Ban co chac chan ko? (Y/N)? \n");
		scanf("%c", &xac_nhan);
		switch(xac_nhan) {
			case 'Y': {  //Neu chon Y 
				return 1;
			}
			case 'N': {  //Neu chon N 
				return 0;
				break; 
			}
			default: {  // Neu chon cac kí tu khac 
			// canh bao yeu cau nguoi choi nhap lai 
				printf("Lua chon ko hop le, moi chon lai\n"); 
				break;
			}
		}
	}while(1);
}

/*
* @Author:DQK
* @Description: Lua chon
*/
int main() {// Lap cho den khi chon thoat 
	int lua_chon; 
	float tien = 10; 
	int chip = 0; 
	int chip_mua, chip_ban;
	float B, R; 
	float tien_mua_chip, tien_ban_chip; 
	
	srand((int)time(0)); 

	while(1) { 
	    menu();//HIen thi danh sach 
		
		 //Nhap lua chon 
	    printf("\nNhap lua chon: ");
		scanf("%d", &lua_chon);
		 
		 //Xet lua chon 
	    switch(lua_chon) {
		    case 1: { // Neu chon 1 
                printf("Nhap so chip muon mua: ");
				scanf(" %d", &chip_mua);
				if (chip_mua <= 0){
					printf("So chip ko hop le \n");
					break;
				}
				B = mua(chip_mua, tien);  
				if(B == 0)
					printf("Khong du tien hay nap lan dau de duoc choi!\n");
				if(B != 0) {
					tien_mua_chip = chip_mua * 0.25; 
					chip = chip + chip_mua;
					tien = tien - tien_mua_chip;
					printf("Ban hien co %.2f $ va %.0d chip\n", tien, chip);				
				}  
			    break;
			}
		    case 2: {  // Neu chon 2 
				if(chip > 0) {
					printf("Nhap so chip muon ban: ");
					scanf(" %d", &chip_ban);
					tien_ban_chip = chip_ban * 0.2; 
					chip = chip - chip_ban;
					tien = tien + tien_ban_chip;
					printf("Ban hien co %.2f $ va %d chip\n", tien, chip);				
				} else {
					printf("Ko du chip");
				}
				break;
			} 
			case 3: { //Neu chon 3 
				quay_so();
				break;
			}
			case 4: { // Neu chon 4 
				// IN ra thong tin tai khoan so du nguoi choi 
				printf("So tien hien tai la %.2f\n", tien);
				printf("So chip hien tai la %d\n", chip);
				break;
			} 
			case 6: { //Neu chon 5 
				if (xac_nhan_thoat() == 1) { // neu nguoi dung xac nhan
                    return 0; // ket thuc ham main
                }
                break;
            }
			default: { // Neu chon cac ki tu khac
					//yeu cau nguoi choi chon lai 
				printf("Lua chon ko hop le. moi nhap lai!\n"); 
				break;
			} 
			//case 5: {
				//void file(float &tien, int &chip) {
					//FILE *f;
					//char NAME[] = "1.txt";
					//fw = fopen(NAME, "w");
					//if (f != NULL){
						//fprintf(f, "%.2f\n", tien);
						//fprintf(f, "%d\n", chip);
					//} else {
						//printf("error");	
						//}
					//}	//fclose (f);
				//}
			//}
		} 
	}   
}
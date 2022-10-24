#include <stdio.h>

void menu() {
    printf("+-----------Menu----------+");
    printf("\n1. Thong tin ca nhan");
    printf("\n2. Xep loai nhan vien");
    printf("\n3. Thong tin vat nuoi");
    printf("\n0. Thoat");
}

int tinh_tuoi(int nam) {
    int so_tuoi = 2021 - nam;
    if(so_tuoi < 18) {
        printf("Tuoi tre\n");
    } else if( 18 <= so_tuoi <=55) {
        printf("Tuoi lao dong\n");
    } else {
        printf("Tuoi gia\n");
    }
}

int min(int SL[], int n)
{
    int min = SL[0];
    for (int i = 1; i < n; i++) {
        if (min > SL[i]) {
            min = SL[i];
        }
    }
    printf("Vat nuoi co so can nang nho nhat la: %d", min);
    return min;
}

int vatnuoi(int n, int SL[]){
    for(int i=1; i<=n; i++){
		printf("%d: \t", i); 	scanf("%d", &SL[i]);
	}  
}

int tim_gia_tri(int n, int SL[]){
    int a=0;
	for(int i=1; i<=n; i++){
	    n++;
		if(SL[i]>=30){
		    printf("%d", a);
		}
    }
}

int main() {
    int n, SL[50];
	int lua_chon; 
	
	char Datnuoc[30];
	printf("Moi ban nhap dat nuoc:\t");
	fflush(stdin); 
    fgets(Datnuoc, sizeof(Datnuoc), stdin);
	
	char Thanhpho[30];
	printf("Moi ban nhap thanh pho:\t"); 
    scanf(" %s", &Thanhpho);
	
	char Duong[30];
	printf("Moi ban nhap duong:\t"); 
    scanf ("%s", &Duong);

    int sonha;
    printf("Moi ban nhap so nha:\t ");
    scanf("%d", &sonha);

	while(1) {
		fflush(stdin); 
		menu();
		printf("\nMoi ban nhap lua chon: "); scanf("%d", &lua_chon); 
		switch(lua_chon) {
			case 1: {
				printf("\n");
				printf("Dat nuoc: %s\nThanh pho: %s\nDuong: %s\nSo nha: %d\n", Thanhpho, Datnuoc, Duong, sonha);  
				break;
			} 
            case 2: {
                int nam_sinh;
                printf("Moi nhap nam sinh: ");
                scanf("%d", &nam_sinh);
                int so_tuoi = tinh_tuoi(nam_sinh);
                break;
            }
            case 3: {
                printf("Moi ban nhap so luong vat nuoi:\n");	
                scanf("%d", &n);
				vat_nuoi(n, SL);
				printf("So luong vat nuoi la: %d\n", n);
                tim_gia_tri(n, SL);
				min(n, SL); 
				break;
            }
            case 0: {
                return 0;
                break;
            }
            default :{
                printf("Nhap sai cu phap. Moi nhap lai.");
                break;
            }
        }
    }
}
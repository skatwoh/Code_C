#include <stdio.h>
/*
*Author: DQKhanh
*@Description: Lay nam hien tai tru di nam sinh duoc truyen vao ra so tuoi. Lay so tuoi du 18 tuoi
*@param year: Nam sinh
*@Return: Da du tuoi(1) hoac chua du tuoi (0)
*/
int is_enough_age(int year){
	int so_tuoi = 2021 - year;
	if(so_tuoi >= 14, so_tuoi <= 16){
		return 1;
	}else if(so_tuoi <14, so_tuoi > 16){
		return 0;
	}
}

int main(){	
	int nam_sinh;
	printf("Nhap nam sinh:");
	scanf("%d", &nam_sinh);
	
	int so_tuoi=is_enough_age(nam_sinh);
	if(so_tuoi >= 14, so_tuoi <= 16){
		printf("Da du tuoi.");
	}else if(so_tuoi <14, so_tuoi > 16){
		printf("Chua du tuoi.");
	}
		
}
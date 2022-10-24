#include <stdio.h>
/*
*Author: DQKhanh
*@Description: Tinh chu vi hinh vuong tu thong tin chieu dai canh duoc truyen vao
*@param side: Chieu dai canh hinh vuong
@Return: Chu vi hinh vuong
*/
unsigned long int calculate_perimeter_of_square(unsigned int side){
	unsigned long int chu_vi = side * 4;
	return chu_vi;
}

/*
*Author: DQKhanh
*@Description: Tinh dien tich hinh vuong tu thong tin chieu dai canh duoc truyen vao
*@param side: Chieu dai canh hinh vuong
@Return: Dien tich hinh vuong
*/
unsigned long int calculate_area_of_square(unsigned int side){
    unsigned long int dien_tich = side * side;
	return dien_tich;
}

int main(){
    unsigned int side;
    printf("Nhap chieu dai canh: ");
    scanf("%lu", &side);

    printf("Chu vi la: %lu\n", calculate_perimeter_of_square(side));

    printf("Dien tich la: %lu", calculate_area_of_square(side));

}

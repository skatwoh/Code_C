#include <stdio.h>
const float  PI = 3.14;
/*
*Author: DQKhanh
*@Description: Tinh chu vi hinh tron tu thong tin ban kinh duoc truyen vao
*@param radius: Ban kinh
@Return: Chu vi hinh tron
*/
float calculate_perimeter_of_circle_diameter ( unsigned int radius){
	float chu_vi = PI * radius;
	return chu_vi;
}

/*
*Author: DQKhanh
*@Description: Tinh dien tich hinh tron tu thong tin ban kinh duoc truyen vao
*@param radius: Ban kinh
@Return: Dien tich hinh tron
*/
float calculate_area_of_circle_diameter ( unsigned int radius){
	float dien_tich = PI * radius * radius;
	return dien_tich;
}

int main() {
    unsigned int ban_kinh;
    printf("Nhap ban kinh:\n ");
    scanf("%lu", &ban_kinh);

    printf("Chu vi hinh tron la: %f\n", calculate_perimeter_of_circle_diameter(ban_kinh));
    printf("Dien tich hinh tron la: %f", calculate_area_of_circle_diameter(ban_kinh));

}
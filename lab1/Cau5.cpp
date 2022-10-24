#include <stdio.h>

/*
*Author: DQKhanh
*@Description: Doi tu so giay sang so phut tuong ung
*@param seconds: So giay
@Return: So phut
*/
float seconds_to_minutes (float seconds){
	float phut = seconds / 60;
	return phut;
}

/*
*Author: DQKhanh
*@Description: Doi tu so phut sang so giay tuong ung
*@param minutes: So phut
@Return: So giay
*/
float minutes_to_seconds(float minutes){
    float giay = minutes * 60;
    return giay;
}

 int main() {
     float phut, giay;
     printf("Nhap so giay:\n ");
     scanf("%f", &giay);

     printf("Nhap so phut:\n ");
     scanf("%f", &phut);

     printf("So giay la:\n %f ", seconds_to_minutes(giay));
     printf("So phut la: %f ", minutes_to_seconds(phut));

 }
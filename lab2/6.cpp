#include <stdio.h>

int enter_number(char* message) {
    int number;
    printf(message);
    scanf("%d", &number);
    return number;
}
int Kt_ngay(int month,int year) {
    
	switch(month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	 	return 31;
	 	break;
	 		
	case 4:
	case 6:
	case 9:
	case 11:
			return 30;
	 		break;
			
		case 2:
			if ((year%400==0 || year%4==0))
				return 29;
			else 
				return 28;		
			break;
	}
}
int validate_date(int day,int month,int year) {
	if (year<1)
		return false;
	if (month<1 || month>12) 
		return false;	
	if (day<1 || day>Kt_ngay(month,year)) 
		return false;	
	else	
		return true;
}
int main() {
    int year = enter_number("Moi nhap nam: ");
    int month = enter_number("Moi nhap thang: ");
    int day = enter_number("Moi nhap ngay: ");

    int is_valid = validate_date(day, month, year);
    if (is_valid) {
        printf("Hop le!");
    } else {
        printf("Khong hop le!");
    }
}
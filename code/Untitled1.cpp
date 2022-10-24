#include<stdio.h>

int tinh_tong_hai_so(int so_thu_nhat, int so_thu_hai) {
	
	int tinh_tong_hai_so = so_thu_nhat + so_thu_hai;
	return tinh_tong_hai_so;
}

int tinh_hieu_hai_so(int so_thu_nhat, int so_thu_hai) {
	
	int tinh_hieu_hai_so = so_thu_nhat - so_thu_hai;
	return tinh_hieu_hai_so;
}

int tinh_tich_hai_so(int so_thu_nhat, int so_thu_hai) {
	
	int tinh_tich_hai_so = so_thu_nhat * so_thu_hai;
	return tinh_tich_hai_so;
}

int tinh_thuong_hai_so(int so_thu_nhat, int so_thu_hai) {
	
	int tinh_thuong_hai_so = so_thu_nhat / so_thu_hai;
	return tinh_thuong_hai_so;
}

int main() {// chuong trinh chinh
      
      int tong = tinh_tong_hai_so(1,2);
      printf("2 + 1 = %d\n", tong);
      
      int hieu = tinh_hieu_hai_so(1,2);
      printf("2 - 1 = %d\n", hieu);
      
      int tich = tinh_tich_hai_so(1,2);
      printf("2 * 1 = %d\n", tich);
      
      int thuong = tinh_thuong_hai_so(1,2);
      printf("2 / 1 = %d\n", thuong);
      
      return 0;
}

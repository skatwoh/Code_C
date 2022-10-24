#include <stdio.h>

void print_menu() {
    printf("CHUONG TRINH TINH TOAN DON GIAN\n");
    printf("1. Tinh tong 2 so\n");
    printf("2. Tinh hieu 2 so\n");
    printf("3. Tinh tich 2 so\n");
    printf("4. Tinh thuong 2 so\n");
}

int main() {
    print_menu();

    // Nhap 2 so
    double so_thu_nhat, so_thu_hai;
    printf("Moi nhap so thu nhat:");
    scanf("%lf", &so_thu_nhat);
    printf("Moi nhap so thu hai:");
    scanf("%lf", &so_thu_hai);

    // Tinh toan
    int lua_chon;
    printf("Moi nhap lua chon:");
    scanf("%d", &lua_chon);

    double ket_qua;
    if (lua_chon == 1) { // Nguoi dung nhap 1
       ket_qua = add(so_thu_nhat, so_thu_hai);
    }
    else if (lua_chon == 2) { // Nguoi dung nhap 2
        ket_qua = minus(so_thu_nhat, so_thu_hai);
    }
    else if (lua_chon == 3) { // Nguoi dung nhap 3 
        ket_qua = multiply(so_thu_nhat, so_thu_hai);
    }
    else if (lua_chon ==4) { // Nguoi dung nhap 4
        ket_qua = divide(so_thu_nhat, so_thu_hai);
    }
    else { // Cac truong hop khac thi cho la cong
        ket_qua = add(so_thu_nhat, so_thu_hai);
    }
    printf("Ket qua = %lf", ket_qua);
}
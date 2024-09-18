#include <stdio.h>

int main(){
    float diem;
    printf("Nhap diem so: ");
    scanf("%f", &diem);
    if (diem  >= 9 && diem <= 10){
        printf("Xep loai: Xuat sac\n");
    }
    else if (diem >= 8 && diem < 9){
        printf("Xep loai: Gioi\n");
    }
    else if (diem >= 6.5 && diem < 8){
        printf("Xep loai: Kha\n");
    }
    else if (diem >= 5 && diem < 6.5){
        printf("Xep loai: Trung binh\n");
    }
    else if (diem >= 3.5 && diem < 5){
        printf("Xep loai: Yeu\n");
    }
    else if (diem >= 0 && diem < 3.5){
        printf("Xep loai: Kem\n");
    }
    else{
        printf("Vui long nhap dung diem !");
    }
    return 0;
}

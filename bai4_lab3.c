#include <stdio.h>
#include <math.h>

int main(){
    int luachon;
    printf("Muc Luc\n");
    printf("1. Xep hang hoc luc - Bai 1\n");
    printf("2. Giai phuong trinh bac nhat - Bai 2.1\n");
    printf("3. Giai phuong trinh bac hai - Bai 2.2\n");
    printf("4. Tinh so tien dien - Bai 3\n");
    printf("Vui long nhap lua chon : ");
    scanf("%d", &luachon);
    switch(luachon){
        case 1: {
            float diem;
            printf("Nhap diem so: ");
            scanf("%f", &diem);
            if (diem  >= 9){
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
            else{
                printf("Xep loai: Kem\n");
            }
            break;
        }
        case 2: {
            float a, b;
            printf("Nhap a va b : ");
            scanf("%f %f", &a, &b);
            if (a == 0){
                if (b == 0){
                    printf("Phuong trinh co vo so nghiem");
                }
                else {
                    printf("Phuong trinh vo nghiem");
                }
            }
            else{
                printf("Gia tri cua x la : %.2f", -b / a);
            }
            break;
        }
        case 3: {
            float a, b, c;
            printf("Nhap a, b, c : ");
            scanf("%f %f %f", &a, &b, &c);
            if (a == 0){
                printf("Phuong trinh co mot nghiem duy nhat x = %.2f\n", -c / b);
            }
            else{
                float delta = b * b - 4 * a * c;
                if (delta > 0){
                    float x1 = (-b + sqrt(delta)) / (2 * a);
                    float x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co hai nghiem phan biet x1 = %.2f, x2 = %.2f\n", x1, x2);
                }
                else if (delta == 0){
                    float x = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep x = %.2f\n");
                }
                else{
                    printf("Phuong trinh vo nghiem\n");
                }
            }
            break;
        }
        case 4: {
            printf("Đang sửa");
            break;
        }
        default:
            printf("Lua chon khong hop le\n");
    }

    return 0;
}

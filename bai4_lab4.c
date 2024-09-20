#include <stdio.h>
#include <math.h>

int main(){
    printf("1. Tinh tonng trung binh cac so chia het cho 2 tu min den max - Bai 1\n");
    printf("2. Xac dinh kiem tra so nguyen to - Bai 2\n");
    printf("3. Kiem tra so chinh phuong - Bai 3\n");
    int luachon;
    printf("Vui long nhap lua chon :  ");
    scanf("%d", &luachon);
    switch(luachon){
        case 1:
            int min, max;
            int i;
            int tong = 0, dem = 0;
            float trungbinh = 0;
            printf("Nhap min va max : ");
            scanf("%d %d", &min, &max);
            for (i = min; i <= max; i++){
                if (i % 2 == 0){
                    tong += i;
                    dem += 1;
            }
            }
            trungbinh = tong / dem;
            printf("Tong trung binh cac so chia het 2 la: %.2f\n", trungbinh);
            break;
        case 2:
            int m;
            printf("Nhap vao so can kiem tra : ");
            scanf("%d", &m);
            if (m <= 1){
                printf("%d khong la so nguyen to", m);
            }else{
                int i;
                int dem = 1;
                for (i = 2; i <= sqrt(m); i++){
                    if (m % i == 0){
                        dem = 0;
                        break;
                    }
                }
                if (dem == 1){
                    printf("%d la so nguyen to", m);
                }else{
                    printf("%d khong la so nguyen to", m);
                }
            }
            break;
        case 3:
            int n;
            printf("Nhap vao so can kiem tra : ");
            scanf("%d", &n);
            float x = sqrt(n);
            if (x == (int)x){
                printf("%d la so chinh phuong\n", n);
            }else{
                printf("%d khong la chinh phuong\n", n);
            }
            break;
        default:
            printf("Lua chon khong hop le\n");
    }
    return 0;
}

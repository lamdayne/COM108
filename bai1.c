#include <stdio.h>

int main(){
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
}
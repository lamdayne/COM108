#include <stdio.h>

int main(){
    float sodien;
    printf("Vui long nhap so dien : ");
    scanf("%f", &sodien);
    if (sodien > 0 && sodien <= 50){
        printf("Tien dien la : %.2f VND", sodien * 1678);
    }
    else if (sodien > 50 && sodien <= 100){
        printf("Tien dien la : %.2f VND", sodien * 1734);
    }
    else if (sodien > 100 && sodien <= 200){
        printf("Tien dien la : %.2f VND", sodien * 2014);
    }
    else if (sodien > 200 && sodien <= 300){
        printf("Tien dien la : %.2f VND", sodien * 2536);
    }
    else if (sodien > 300 && sodien <= 400){
        printf("Tien dien la : %.2f VND", sodien * 2834);
    }
    else{
        printf("Tien dien la : %.2f VND", sodien * 2927);
    }
    return 0;
}

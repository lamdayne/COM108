#include <stdio.h>

int main(){
    float a, b;
    printf("Nhap a va b : ");
    scanf("%f %f", &a, &b);
    if (a == 0){
        if (b == 0){
            printf("Phuong trinh co vo so nghiem");
        } else {
            printf("Phuong trinh vo nghiem");
        }
    }
    else{
        printf("Gia tri cua x la : %.2f", -b / a);
    }   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
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
            printf("Phuong trinh co nghiem kep x = %.2f\n", x);
        }
        else{
            printf("Phuong trinh vo nghiem\n");
        }
    }
    return 0;
}
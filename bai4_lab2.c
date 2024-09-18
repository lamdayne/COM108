#include <stdio.h>

int main(){
    float toan, ly, hoa;
    printf("Nhap diem Toan, Ly, Hoa : ");
    scanf("%f %f %f", &toan, &ly, &hoa);
    printf("Diem trung binh : %.2f", (toan * 3 + ly * 2 + hoa * 1) / 6);
    return 0;
}

#include <stdio.h>

int main(){
    int r;
    printf("Nhap vao ban kinh hinh tron : ");
    scanf("%d", &r);
    float pi = 3.14159;
    printf("Chu vi hinh tron : %.2f\n", pi * 2 * r);
    printf("Dien tich hinh tron : %.2f", pi * r * r);
    return 0;
}

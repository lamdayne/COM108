#include <stdio.h>
#include <math.h>

int main() {
    int n;
    do {
        printf("Nhap vao mot so nguyen duong: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("So khong hop le, vui long nhap lai!\n");
        }
    }while (n < 0);
    int x = (int)sqrt(n);
    if (x * x == n) {
        printf("%d la so chinh phuong.\n", n);
    }else{
        printf("%d khong phai la so chinh phuong.\n", n);
    }
    return 0;
}

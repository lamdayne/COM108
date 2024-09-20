#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so can kiem tra : ");
    scanf("%d", &n);
    float x = sqrt(n);
    if (x == (int)x){
        printf("%d la so chinh phuong\n", n);
    } else{
        printf("%d khong la chinh phuong\n", n);
    }
    return 0;
}

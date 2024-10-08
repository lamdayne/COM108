#include <stdio.h>

int main (){
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    if (a % b == 0){
        printf("%d chia het cho %d", a, b);
    }else{
        printf("%d khong chia het cho %d", a, b);
    }
    return 0;
}
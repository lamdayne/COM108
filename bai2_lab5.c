#include <stdio.h>

int main(){
    int nam;
    printf("Nhap nam can kiem tra: ");
    scanf("%d", &nam);
    if (nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0){
        printf("%d la nam nhuan\n", nam);
    } else{
        printf("%d khong la nam nhuan\n", nam);
    }
    return 0;
}

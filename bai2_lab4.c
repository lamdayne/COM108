#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Nhap vao so can kiem tra : ");
    scanf("%d", &n);
    if (n <= 1){
        printf("%d khong la so nguyen to", n);
    }else{
        int i;
        int dem = 1;
        for (i = 2; i <= sqrt(n); i++){
            if (n % i == 0){
                dem = 0;
                break;
            }
        }
        if (dem == 1){
            printf("%d la so nguyen to", n);
        }else{
            printf("%d khong la so nguyen to", n);
        }
    }
    return 0;
}

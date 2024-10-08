#include <stdio.h>
#include <math.h>

int chanle(int n){
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}
int sochinhphuong(int n){
    int i;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            break;
    }
    if(i * i == n)
        return 1;
    else
        return 0;
}
int main(){
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    if(chanle(n) == 1){
        printf("%d la so chan\n", n);
    }else{
        printf("%d la so le\n", n);
    }
    if(sochinhphuong(n) == 1){
        printf("%d la so chinh phuong\n", n);
    }else{
        printf("%d khong phai la so chinh phuong\n", n);
    }
    return 0;
}
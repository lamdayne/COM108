#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    printf("Nhap a va b: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("Sau khi swap: a = %d, b = %d\n", a, b);
    return 0;
}
#include <stdio.h>

int max(int a, int b, int c){
    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}
int main(){
    int a, b, c;
    printf("Nhap ba so a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("So lon nhat cua ba so %d, %d, %d la %d\n", a, b, c, max(a, b, c));
    return 0;
}
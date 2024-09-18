#include <stdio.h>

int main(){
    int chieudai, chieurong;
    printf("Nhap chieu dai chieu rong hinh chu nhat: ");
    scanf("%d %d", &chieudai, &chieurong);
    printf("Chu vi hinh chu nhat : %d\n ", (chieudai + chieurong) *2 );
    printf("Dien tich hinh chu nhat: %d\n", chieudai * chieurong);
    return 0;
}
#include <stdio.h>

int main(){
    int sodien, tien;
    printf("Nhap so dien : ");
    scanf("%d", &sodien);
    if(sodien <= 50){
        tien = sodien * 1678;
        printf("Tien dien la : %d VND", tien);
    }
    else if(sodien <= 100){
        tien = (50 * 1678) + (sodien - 50) * 1734;
        printf("Tien dien la : %d VND", tien);
    }
    else if (sodien <= 200){
        tien = (50 *1678) + (50 * 1734) + (sodien - 100) * 2014;
        printf("Tien dien la : %d VND", tien);
    }
    else if(sodien <= 300){
        tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (sodien - 200) * 2536;
        printf("Tien dien la : %d VND", tien);
    }
    else if(sodien <= 400){
        tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (sodien - 300) * 2834;
        printf("Tien dien la : %d VND", tien);
    }
    else{
        tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + (sodien - 400) * 2927;
        printf("Tien dien la : %d VND", tien);
    }
    return 0;
}

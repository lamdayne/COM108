#include <stdio.h>

void chucnang1(){
    printf("chucnang1\n");
}
void chucnang2(){
    printf("chucnang2\n");
}
void chucnang3(){
    printf("chucnang3\n");
}
void chucnang4(){
    printf("chucnang4\n");
}
void chucnang5(){
    printf("chucnang5\n");
}
void chucnang6(){
    printf("chucnang6\n");
}
void chucnang7(){
    printf("chucnang7\n");
}
int main(){
	printf("+--------------------------------------------------------------------+\n");
	printf("|			  MENU CHUC NANG	 	  	     |\n");
	printf("+--------------------------------------------------------------------+\n");
    printf("|  1. Kiem tra so nguyen to			                     |\n");
    printf("+--------------------------------------------------------------------+\n");
	printf("|  2. Tim uoc so chung va boi chung cua 2 so		       	     |\n");
	printf("+--------------------------------------------------------------------+\n");
	printf("|  3. Chuong trinh tinh tien cho quan Karaoke	                     |\n");
	printf("+--------------------------------------------------------------------+\n");
	printf("|  4. Tinh tien dien					             |\n");
	printf("+--------------------------------------------------------------------+\n");
	printf("|  5. Xay dung chuc nang tinh tien lai suat vay ngan hang vay tra gop|\n");
	printf("+--------------------------------------------------------------------+\n");
	printf("|  6. Sap xep thong tin sinh vien 				     |\n");
	printf("+--------------------------------------------------------------------+\n");
	printf("|  7. Xay dung chuong trinh tinh toan phan so			     |\n");
    printf("+--------------------------------------------------------------------+\n");
    int luachon;
    do {
        printf("</> Vui long nhap lua chon : ");
        luachon = 0;
        scanf("%d", &luachon);
        while (getchar() != '\n');
        if (luachon < 1 || luachon > 10) {
            printf("Lua chon khong hop le, vui long nhap lai!\n");
        }
    } while (luachon < 1 || luachon > 10);
    switch (luachon) {
        case 1:
            chucnang1();
            break;
        case 2:
            chucnang2();
            break;
        case 3:
            chucnang3();
            break;
        case 4:
            chucnang4();
            break;
        case 5:
        	chucnang5();
        	break;
        case 6:
        	chucnang6();
        	break;
        case 7:
        	chucnang7();
			break;
        default:
            printf("Lua chon khong hop le\n");
            break;
    }
	return 0;
}

#include <stdio.h>
#include <math.h>

//kiem tra so nguyen to, so chinh phuong
void chucnang1() {
    int n, lam;
    do {
        printf("</> Nhap vao so nguyen: ");
        lam = scanf("%d", &n);
        while (getchar() != '\n');
        if (lam != 1) {
            printf("Nhap sai vui long nhap lai!\n");
        }
    } while (lam != 1);
    if (n < 0) {
        printf("%d la so nguyen am\n", n);
    } else {
    	printf("%d la so nguyen duong\n", n);
        int x = sqrt(n);
        if (x * x == n) {
            printf("%d la so chinh phuong\n", n);
        } else {
            printf("%d khong phai la so chinh phuong\n", n);
        }
        int dem = 1;
        if (n < 2) {
            dem = 0;
        } else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    dem = 0;
                    break;
                }
            }
        }
        if (dem == 1) {
            printf("%d la so nguyen to\n", n);
        } else {
            printf("%d khong la so nguyen to\n", n);
        }
    }
}
//tim boi chung nho nhat
int bcnn(int a, int b){
	int max;
	if(a > b){
    	max = a;
	}else{
    	max = b;
	}
	int kqbc = max;
	while(1){
    	if(max % a == 0 && max % b == 0){
        	kqbc = max;
        	break;
    	}
    	++max;
	}
	return kqbc;
}
//tim uoc chung lon nhat
int ucln(int a, int b){
	int min;
	if(a < b) {
    	min = a;
	}else{
    	min = b;
	}
	int kquc = 1;
	for(int i = 1; i <= min; i++){
    	if(a % i == 0 && b % i == 0){
        	kquc = i;
    	}
	}
	return kquc;
}
//tim uoc chung boi chung nho nhat
void chucnang2(){
    int a, b, nhapa, nhapb;
    do{
        printf("</> Nhap vao so nguyen a : ");
        nhapa = scanf("%d", &a);
        while (getchar() != '\n');
        if (nhapa != 1 || a < 0){
            printf("Nhap sai vui long nhap lai!\n");
        }else break;
    }while(1);
    do{
        printf("</> Nhap vao so nguyen b : ");
        nhapb = scanf("%d", &b);
        while (getchar() != '\n');
        if (nhapb != 1 || b < 0){
            printf("Nhap sai vui long nhap lai!\n");
        }else break;
    }while(1);
    printf("UCLN cua hai so %d va %d la %d\n", a, b, ucln(a, b));
    printf("BCNN cua hai so %d va %d la %d\n", a, b, bcnn(a, b));
}
//tinh tien gio karaoke
void chucnang3() {
    int batdau, ketthuc;
    do {
        printf("</> Nhap vao gio bat dau : ");
        if (scanf("%d", &batdau) != 1 || batdau < 12 || batdau > 23 || batdau == 23) {
            printf("Gio ket thuc khong hop le vui long nhap lai\n");
            while (getchar() != '\n');
            continue;
        }
        if (batdau < 12 || batdau > 23 || batdau == 23) {
            printf("Gio bat dau khong hop le vui long nhap lai\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    } while (1);
    do {
        printf("</> Nhap vao gio ket thuc : ");
        if (scanf("%d", &ketthuc) != 1) {
            printf("Gio ket thuc khong hop le vui long nhap lai\n");
            while (getchar() != '\n');
            continue;
        }     
        if (ketthuc < 12 || ketthuc > 23 || ketthuc <= batdau) {
            printf("Gio ket thuc khong hop le vui long nhap lai\n");
            while (getchar() != '\n');
            continue;
        }  
        break;
    } while (1);
    float tonggio = ketthuc - batdau;
    float tongtien;
    if (tonggio <= 3) {
        tongtien = tonggio * 50000;
    } else {
        tongtien = 3 * 50000 + (tonggio - 3) * 50000 * 0.7;
    }
    if (batdau >= 14 && batdau <= 17) {
        tongtien *= 0.9;
    }
    printf("Tong gio hat la : %.f\n", tonggio);
    printf("Tong tien gio hat la %.1f\n", tongtien);
}
//tinh so dien tieu thu
void chucnang4(){
    int sodien, tien, dien;
    tinhdien:
    do{
        printf("</> Nhap so dien : ");
        dien = scanf("%d", &sodien);
        while (getchar() != '\n');
        if (dien != 1){
            printf("Nhap sai vui long nhap lai!\n");
        }else{
        	break;
		}
    }while(1);
    if (sodien >= 0){
        if(sodien <= 50){
            tien = sodien * 1678;
            printf("</>Tien dien la : %d VND\n", tien);
        }
        else if(sodien <= 100){
            tien = (50 * 1678) + (sodien - 50) * 1734;
            printf("Tien dien la : %d VND\n", tien);
        }
        else if (sodien <= 200){
            tien = (50 *1678) + (50 * 1734) + (sodien - 100) * 2014;
            printf("Tien dien la : %d VND\n", tien);
        }
        else if(sodien <= 300){
            tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (sodien - 200) * 2536;
            printf("Tien dien la : %d VND\n", tien);
        }
        else if(sodien <= 400){
            tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (sodien - 300) * 2834;
            printf("Tien dien la : %d VND\n", tien);
        }
        else{
            tien = (50 * 1678) + (50 * 1734) + (100 * 2014) + (100 * 2536) + (100 * 2834) + (sodien - 400) * 2927;
            printf("Tien dien la : %d VND\n", tien);
        }
    }else{
        printf("Nhap sai vui long nhap lai\n");
        goto tinhdien;       
    }
}
//tinh tien vay phai tra
void chucnang5(){
    int tienvay, thang, nhap2, nhap3;  
    do{
        printf("</> Nhap so tien can vay : ");
        nhap2 = scanf("%d", &tienvay);
        while (getchar() != '\n');
        if (nhap2 != 1 || tienvay <= 0) {
            printf("So tien khong hop le, vui long nhap lai\n");
        }else{
            break;
        }
    }while(1);
    do{
        printf("</> Nhap so thang : ");
        nhap3 = scanf("%d", &thang);
        while (getchar() != '\n');
        if (nhap3 != 1 || thang <= 0) {
            printf("So thang khong hop le, vui long nhap lai\n");
        } else {
            break;
        }
    }while (1);
    float lai, sotiengoc, tienphaitra, sotienconlai, laiphaitra;
	lai = 0.05;
	sotiengoc = tienvay / thang;
	sotienconlai = tienvay;
	printf("+--------+--------------+--------------+------------------+-----------------+\n");
	printf("| Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai |\n");
	printf("+--------+--------------+--------------+------------------+-----------------+\n");
	for (int i = 1; i <= thang; i++){
    	laiphaitra = sotienconlai * lai;
    	tienphaitra = laiphaitra + sotiengoc;
    	sotienconlai -= sotiengoc;
    	printf("|    %d   |   %.f      |    %.f    |    %.f     |     %.f     |\n", i, laiphaitra, sotiengoc, tienphaitra, sotienconlai);
    	printf("+--------+--------------+--------------+------------------+-----------------+\n");
	}
}
//xep hang sinh vien
void chucnang6(){
	float diem, nhapdiem;
	xeploai:
    do{
    	printf("</> Nhap diem so: ");
    	nhapdiem = scanf("%d", &diem);
    	while (getchar() != '\n');
    	if(nhapdiem != 1 || diem < 0){
    		printf("Diem so khong hop le vui long nhap lai\n");
		}
		else{
			break;
		}
	}while(1);
	
    if (diem  >= 9 && diem <= 10){
        printf("Xep loai: Xuat sac\n");
    }
    else if (diem >= 8 && diem < 9){
        printf("Xep loai: Gioi\n");
    }
    else if (diem >= 6.5 && diem < 8){
        printf("Xep loai: Kha\n");
    }
    else if (diem >= 5 && diem < 6.5){
        printf("Xep loai: Trung binh\n");
    }
    else if (diem >= 3.5 && diem < 5){
        printf("Xep loai: Yeu\n");
    }
    else if (diem >= 0 && diem < 3.5){
        printf("Xep loai: Kem\n");
    }
    else{
        printf("Diem so khong hop le vui long nhap lai\n");
        goto xeploai;
    }
}
//tinh toan phan so
void chucnang7(){
	int tuso1, mauso1, tuso2, mauso2, nhaptuso1, nhaptuso2, nhapmauso1, nhapmauso2, pheptinh, tinh;	
	do{
		printf("</> Nhap tu so thu 1 :");
		nhaptuso1 = scanf("%d", &tuso1);
		while (getchar() != '\n');
		if (nhaptuso1 != 1){
			printf("Tu so khong hop le vui long nhap lai\n");
		}else{
			break;
		}
	}while(1);
	do{
		printf("</> Nhap mau so thu 1 : ");
		nhapmauso1 = scanf("%d", &mauso1);
		while (getchar() != '\n');
		if (nhapmauso1 != 1){
			printf("Mau so khong hop le vui long nhap lai\n");
		}else{
			break;
		}
	}while(1);
	do{
		printf("</> Nhap tu so thu 2 : ");
		nhaptuso2 = scanf("%d", &tuso2);
		while (getchar() != '\n');
		if (nhaptuso2 != 1){
			printf("Tu so khong hop le vui long nhap lai\n");
		}else{
			break;
		}
	}while(1);
	do{
		printf("</> Nhap mau so thu 2 : ");
		nhapmauso2 = scanf("%d", &mauso2);
		while (getchar() != '\n');
		if (nhapmauso2 != 1){
			printf("Tu so khong hop le vui long nhap lai\n");
		}else{
			break;
		}
	}while(1);
    tinhphanso:
	do{
		printf("+-------------------------------+\n");
		printf("|1. Phep tinh tong hai phan so  |\n");
		printf("|2. Phep tinh hieu hai phan so  |\n");
		printf("|3. Phep tinh thuong hai phan so|\n");
		printf("|4. Phep tinh tich hai phan so  |\n");
		printf("+-------------------------------+\n");
		printf("</> Nhap yeu cau can tinh : ");
		pheptinh = scanf("%d", &tinh);
		while (getchar() != '\n');
		if (pheptinh != 1 || pheptinh < 1 || pheptinh > 4){
			printf("Phep tinh khong hop le vui long nhap lai\n");
		}else{
			break;
		}
	}while(1);
	if (tinh == 1){
		int tongtuso = tuso1 * mauso2 + tuso2 * mauso1;
        int tongmauso = mauso1 * mauso2;
        printf("Tong hai phan so la : %d / %d\n", tongtuso, tongmauso);
	}else if (tinh == 2){
		int hieutuso = tuso1 * mauso2 - tuso2 * mauso1;
        int hieumauso = mauso1 * mauso2;
        printf("Hieu hai phan so la : %d / %d\n", hieutuso, hieumauso);
	}else if (tinh == 3){
		if (tuso2 == 0 || mauso2 == 0) {
            printf("Khong the thuc hien phep tinh thuong\n");
        } else {
            int thuongtuso = tuso1 * mauso2;
            int thuongmauso = mauso1 * tuso2;
            printf("Thuong hai phan so la : %d / %d\n", thuongtuso, thuongmauso);
        }
	}else if (tinh == 4){
		int tichtuso = tuso1 * tuso2;
		int tichmauso = mauso1 * mauso2;
		printf("Tich hai phan so la : %d / %d\n", tichtuso, tichmauso);
	}else{
        printf("Phep tinh khong hop le vui long nhap lai\n");
        goto tinhphanso;
    }
}
//menu chuc nang
int main(){
	chucnang:
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
    //quay lai chuc nang neu muon
    char chu;
    do{
    	printf("+-----------------------------------+\n");
		printf("|Ban co muon dung cac chuc nang khac|\n");
		printf("+-----------------------------------+\n");
		printf("</> Nhap y de vao menu, n de thoat : ");
		scanf(" %c", &chu);
		if (chu != 'y' && chu != 'n'){
			printf("Nhap sai vui long nhap lai\n");
		}else break;
	}while(1);
	if (chu == 'y'){
		goto chucnang;
	}else{
		printf("Ban da thoat chuong trinh\n");
	}
	return 0;
}

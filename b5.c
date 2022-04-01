#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tinhTong(int a, int b);
int tinhHieu(int a, int b);
int tinhTich(int a, int b);
double tinhThuong(int a, int b);

int main(int argc, char *argv[]) {
	int a,b,tong,hieu,tich;
	double thuong;
	int choose;
	do {
		printf("\nTINH TOAN");
		printf("\n==============");
		printf("\n1. Nhap so");
		printf("\n2. Tinh Tong");
		printf("\n3. Tinh Hieu");
		printf("\n4. Tinh Tich");
		printf("\n5. Tinh Thuong");
		printf("\n6. Thoat");
		printf("\n==============");	
		fflush(stdin);
		printf("\nNhap vao lua chon: ");
			scanf("%d", &choose);

	switch(choose){
		case 1: 
			printf("\nNhap vao so a: ");
				scanf("%d", &a);
			printf("\nNhap vao so b: ");
				scanf("%d", &b);
			break;
		case 2:
			tong = tinhTong(a, b);
			printf("\nTong cua %d va %d la: %d", a, b ,tong);
			break;
		case 3:
			hieu = tinhHieu(a, b);
			printf("\nHieu cua %d va %d la: %d",a, b, hieu);
			break;
		case 4: 
			tich = tinhTich(a, b);
			printf("\nTich cua %d va %d la: %d",a, b, tich);
			break;
		case 5:
			thuong = tinhThuong(a, b);
			printf("\nThuong cua %d va %d la: %d",a, b, thuong);
			break;
		case 6:
			exit(0);
			break;
		default: 
			printf("Nhap lai lua chon");
	}
} while (choose != 0);
	return 0;
}
int tinhTong(int a, int b) {
	return a + b;
}
int tinhHieu(int a, int b) {
	return a - b;
}
int tinhTich(int a, int b) {
	return a * b;
}
double tinhThuong(int a, int b) {
	return a / b;
}

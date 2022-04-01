#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tinhTong(int a, int b);
int tinhHieu(int a, int b);
int tinhTich(int a, int b);
int tinhThuong(int a, int b);

int main(int argc, char *argv[]) {
	int a,b,tong,hieu,tich,thuong;
	char choose;
	printf("\nNhap vao so a: ");
	scanf("%d", &a);
	printf("\nNhap vao so b: ");
	scanf("%d", &b);
	
	printf("\n+ Tinh Tong");
	printf("\n- Tinh Hieu");
	printf("\n* Tinh Tich");
	printf("\n/ Tinh Thuong");	
	fflush(stdin);
	printf("\nNhap vao lua chon: ");
	scanf("%c", &choose);
	switch(choose){
		case '+':
			tong = tinhTong(a, b);
			printf("Tong cua %d va %d la: %d", a, b ,tong);
			break;
		case '-':
			hieu = tinhHieu(a, b);
			printf("Hieu cua %d va %d la: %d",a, b, hieu);
			break;
		case '*': 
			tich = tinhTich(a, b);
			printf("Tich cua %d va %d la: %d",a, b, tich);
			break;
		case '/':
			thuong = tinhThuong(a, b);
			printf("Thuong cua %d va %d la: %d",a, b, thuong);
			break;
	}

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
int tinhThuong(int a, int b) {
	return a / b;
}

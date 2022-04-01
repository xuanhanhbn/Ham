#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float GetArea(float a, float b, float c);
float GetArea(float a, float b, float c) {
	float p,s;
	p = (a+b+c)/2;
	s = (sqrt(p*(p-a)*(p-b)*(p-c)));
	return s;
}

int main() {
	float x,y,z;
	printf("Nhap canh a: ");
	scanf("%f", &x);
	printf("\nNhap canh b: ");
	scanf("%f", &y);
	printf("\nNhap canh c: ");
	scanf("%f", &z);
	if((x + y) > z && (x + z ) > y && (y + z ) > x) {
		printf("Dien tich cua tam giac = %.2f", GetArea(x,y,z));
	} else {
		printf("\nLoi");
	}

	return 0;
}



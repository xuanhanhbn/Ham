#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float dienTich(float cd, float cr);
float chuVi(float cd, float cr);

int main(int argc, char *argv[]) {
	float cd,cr,s,p;
	int choose;
	do {
		printf("TINH S,P HINH CHU NHAT");
		printf("\n==============");
		printf("\n1. Tinh Dien Tich");
		printf("\n2. Tinh Chu Vi");
		printf("\n3. Thoat");
		printf("\n==============");	
		fflush(stdin);
		printf("\nNhap vao lua chon: ");
			scanf("%d", &choose);

	switch(choose){
		case 1: 
			printf("\nNhap vao chieu dai: ");
				scanf("%f", &cd);
			printf("\nNhap vao chieu rong: ");
				scanf("%f", &cr);
				dienTich(cd, cr);
				printf("\nDien Tich cua HCN = %8.3f\n", dienTich(cd, cr));
			break;
		case 2:
			printf("\nNhap vao chieu dai: ");
				scanf("%f", &cd);
			printf("\nNhap vao chieu rong: ");
				scanf("%f", &cr);
				chuVi(cd, cr);
				printf("\nChu Vi cua HCN = %8.3f\n", chuVi(cd, cr));
			break;
		case 3:
			exit(0);
			break;
		default: 
			printf("Nhap lai lua chon");
	}
} while (choose != 0);
	return 0;
}

float dienTich(float cd, float cr) {
	float s;
	s = cd * cr;
	return s;
}
float chuVi(float cd, float cr) {
	float p;
	p = 2*(cd + cr);
	return p;
}

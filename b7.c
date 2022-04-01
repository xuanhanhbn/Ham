#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	char answer;
	Check();
	Check2();
	Say();
		printf("Co Ay Co Dong Y khong? Y/N: ");
	scanf("%c", &answer);
	if(answer == 'y' || answer == 'Y') {
		Love();
	} else {
		Break();
	}
	return 0;
}

int Check() {
	int cao;
	char ht,nh;
	float nang;
	printf("\nNHAP TIEU CHUAN CUA BAN");
	printf("\nNhap chieu cao:  ");
	scanf("%d" , &cao);
	printf("\nNhap can nang: ");
	scanf("%f", &nang);
	fflush(stdin);
	printf("\nNhap trinh do hoc thuc: ");
	scanf("%c", &ht);
	fflush(stdin);
	printf("\nNhap ngoai hinh: ");
	scanf("%c", &nh);
}
int Check2() {
	int cao;
	char ht,nh;
	float nang;
	printf("\nNHAP TIEU CHUAN THUC TE CUA CO AY");
	fflush(stdin);
	printf("\nNhap chieu cao:  ");
	scanf("%d" , &cao);
	fflush(stdin);
	printf("\nNhap can nang: ");
	scanf("%f", &nang);
	fflush(stdin);
	printf("\nNhap trinh do hoc thuc: ");
	scanf("%c", &ht);
	fflush(stdin);
	printf("\nNhap ngoai hinh: ");
	scanf("%c", &nh);	
}
int Say() {
	char answer;
	if (Check == Check2){
	printf("I LOVE YOU");
	}
	fflush(stdin);

		
}
int Break() {
	printf("BYE");
}
int Love() {
	printf("LOVE");
}


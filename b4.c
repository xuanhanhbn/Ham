#include <stdio.h>
#include <math.h>
#define MAX_SIZE 5
 
void NhapMang(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
 
 
void outPut(int arr[], int n) {
	int i;
	for ( i = 0; i < n; i++){
		printf("\na[%d] = %d",i,arr[i]);
	}
}

void indexMin(int arr[], int n) {
	int i,min;
	min = arr[0];
	for ( i = 0; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	printf("\nPhan tu nho nhat la: %d", min);
}
 
int main()
{
    int arr[MAX_SIZE];
 
    int n; 
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
   
    NhapMang(arr, n);
    printf("\nCac phan tu co trong mang la :");
    outPut(arr, n);
    indexMin(arr, n);
}

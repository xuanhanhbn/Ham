#include <stdio.h>
#include <math.h>
#define MAX_SIZE 5
 
void NhapMang(float arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }
}
 
 
void outPut(float arr[], int n) {
	int i;
	for ( i = 0; i < n; i++){
		printf("\na[%d] = %8.3f",i,arr[i]);
	}
}

void Swap(float arr[], int n) {
	int i;
	float temp;
 for( i = 0; i <= n/2; i++)
  {
   temp = arr[i];
   arr[i] = arr[n-1-i];
   arr[n-1-i] = temp;
  }
 printf("\nMang dao nguoc la: ");
 for( i = 0; i < n; i++)
     {
        printf("\na[%d] = %8.3f",i,arr[i]);
     } 
}	
 
int main()
{
    float arr[MAX_SIZE];
 
    int n; 
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > MAX_SIZE);
   
    NhapMang(arr, n);
    printf("\nCac phan tu co trong mang la :");
    outPut(arr, n);
    Swap(arr, n);
}

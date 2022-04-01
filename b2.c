#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100
 
void NhapMang(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        printf("Nhap arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}
 
int check(int n)
{
	int i;
    for (i = 0; i <= n; i++)
    {
        if (n % 50 != 0)
        {
            return 0;
        }
    }
    return 1;
}
 

int PrimeCount(int a[], int n)
{
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            count++;
        }
    }
    return count;
}
 

 
void printCheck(int a[], int n)
{
	int i;
    for (i = 0; i < n; i++)
    {
        if (check(a[i]))
        {
            printf("%d\t", a[i]);
        }
    }
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
 
    int primeCount = PrimeCount(arr, n);
    printf("\nCo %d so la boi so cua 50", primeCount);
    if(primeCount > 0){
        printf("\nDanh sach so la boi so cua 50: ");
        printCheck(arr, n);
    }
}

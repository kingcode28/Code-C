#include <stdio.h>


void nhapMang(int a[], int length);
void inMang(int a[], int length);
int tongTrongDoanAB(int arr[], int length, int a, int b);

int main()
{
    int arr[10];
    int a, b;
    nhapMang(arr, 10);
    inMang(arr, 10);
    printf("\nNhap doan a, b(a < b): ");
    scanf("%d %d", &a,&b);
    printf("Tong [a, b] = %d", tongTrongDoanAB(arr, 10, a, b));
}

void nhapMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        scanf("%d", &a[i]);
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int tongTrongDoanAB(int arr[], int length, int a, int b)
{
    int i, tong, indexA=length;
    for(i=0, tong=0; i<length; i++)
    {
        if(arr[i] == a)
        {
            tong += arr[i];
            indexA = i;
        }
        if(i > indexA)
        {
            tong += arr[i];   
            if(arr[i] == b)
                break;
        }
    }
    return tong;
}
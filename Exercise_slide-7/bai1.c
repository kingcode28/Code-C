#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
float TBCSoChan(int a[], int length);

int main()
{
	srand(time(NULL));
	int a[10];
	nhapMang(a, 6);
	inMang(a, 6);
	printf(TBCSoChan(a, 6) != -1 ? "\nTBC = %f" : "\nMang khong co so chan", TBCSoChan(a, 6));
}

void nhapMang(int a[], int length)
{
	int i;
	for(i=0; i<length; i++)
		a[i] = 1+rand()%8;
}
void inMang(int a[], int length)
{
	int i;
	for(i=0; i<length; i++)
		printf("%5d", a[i]);
}
float TBCSoChan(int a[], int length)
{
	int i, tong, dem;
	tong = 0; dem = 0;
	for(i=0; i<length; i++)
		if(a[i]%2 == 0)
		{
			dem++;
			tong += a[i];
		}
	return dem ? (float)tong/dem : -1;
}


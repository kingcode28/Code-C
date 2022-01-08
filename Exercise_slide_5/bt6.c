#include <stdio.h>

int soHoanThien(int n);
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf(soHoanThien(n) == 1 ? "La so hoan thien" : "Khong phai so hoan thien");
}

int soHoanThien(int n)
{
	int i, tong=0;
	for(i=1; i<= n/2 && tong<=n; i++)
		if(n%i == 0) tong += i;
	return tong == n ? 1 : 0;
}


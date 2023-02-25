#include <stdio.h>

void checkSoNguoc(int n);
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	checkSoNguoc(n);
}

void checkSoNguoc(int n)
{
	int a, soNguoc=0;
	a = n;
	while(a)
	{
		soNguoc = soNguoc*10 + a%10;
		a /= 10;
	}
	printf(soNguoc == n ? "La so nguoc" : "Khong phai so nguoc");
}

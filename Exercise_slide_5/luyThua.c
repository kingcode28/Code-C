#include<stdio.h>

int luyThua(int a, int n);
int main()
{
	int a, n;
	printf("Nhap a^n: ");
	scanf("%d %d", &a,&n);
	printf("%d^%d = %d", a, n, luyThua(a, n));
}

int luyThua(int a, int n)
{
	int i, luyThua=1;
	for(i=1; i<=n; i++)
		luyThua *= a;
	return luyThua;
}
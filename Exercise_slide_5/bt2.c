#include <stdio.h>

int uocChung(int a, int b);
int main()
{
	int a, b, c;
	printf("Nhap a, b, c: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("UCLN = %d", uocChung(uocChung(a, b), c));
}

int uocChung(int a, int b)
{
	while(a != b)
	{
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

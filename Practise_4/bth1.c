#include <stdio.h>

int USCLN(int a, int b);
int main()
{
	int a, b, r;
	printf("Nhap a, b: ");
	scanf("%d %d", &a,&b);
	printf("USCLN = %d", USCLN(a, b));
}

int USCLN(int a, int b)
{
	int r;
	while(a%b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return r;
}


#include <stdio.h>

int USCLN(int a, int b);
int main()
{
	int a, b;
	printf("Nhap a, b: ");
	scanf("%d %d", &a,&b);
	printf("USCLN = %d", USCLN(a, b));
}

int USCLN(int a, int b)
{
	if(b == 0) return a;
	USCLN(b, a%b);
}
#include <stdio.h>

int chuSoNN(int n);
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("Chu so nho nhat = %d", chuSoNN(n));
}

int chuSoNN(int n)
{
	int min, so;
	if(n/10 == 0) return n;
	else
	{
		min = n%10;
		so = chuSoNN(n/10);
	}
	return min > so ? so : min;
}

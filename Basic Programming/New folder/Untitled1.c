#include <stdio.h>

int xoaSoKhong(int n)
{
	int m = 0, lt = 1;
	int soTachRa;
	while( n != 0)
	{
		if(n%10 == 0)
		       n /= 10;
		else {
			 soTachRa = n % 10;
			 m += soTachRa * lt;
			 lt *= 10;
			 n /= 10;
			}
	}
	return m;	
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("%d",xoaSoKhong(n));
}
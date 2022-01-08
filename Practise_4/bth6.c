#include<stdio.h>

int xoaSo0(int n);
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(xoaSo0 == 0)
		printf("Nhap lai!");
	else
		printf("%d", xoaSo0(xoaSo0(n)));
}

int xoaSo0(int n)
{
	int soNguoc = 0;
	if(n < 0)
		return 0;
	else
	{
		while(n>0)
		{
			if(n%10 != 0)
				soNguoc = soNguoc*10 + n%10;
			n /= 10;
		}
		return soNguoc;
	}
}

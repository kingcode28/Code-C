#include<stdio.h>

int soFiboThuN(int n);
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(soFiboThuN(n) == 0)
		printf("Nhap lai!");
	else
	{
		if(soFiboThuN(n) == 1)
			printf("1");
		else
			printf("%d", soFiboThuN(n));
	}
}

int soFiboThuN(int n)
{
	int i, f1, f2, f3;
	if(n < 1)
		return 0;
	else
	{
		if(n == 1 && n == 2)
			return 1;
		else
		{
			f1=f2=1;
			for(i=3; i<=n; i++)
			{
				f3 = f1+f2;
				f1 = f2;
				f2 = f3;
			}
			return f3;
		}
	}
}

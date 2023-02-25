#include<stdio.h>

void lietKeSoHoanThien(int n);
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	lietKeSoHoanThien(n);
}//33550336

void lietKeSoHoanThien(int n)
{
	int i, j, x, tong, demSo=0;
	for(i=6; i<=n; i++)
	{
		x = i/2;
		tong = 0;
		for(j=1; j<=x; j++)
		{
			if(i%j == 0)
				tong += j;
		}
		if(tong == i)
		{
			printf("%d ", i);
			tong == 8128 ? i = 33550335 : i == i*2;
		}
	}
}

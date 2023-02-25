#include<stdio.h>
main()
{
	int i, j, n, x, tong, demSo=0;
	printf("Nhap n: ");
	scanf("%d", &n);
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
			demSo += 1;
			tong == 8128 ? i = 33550335 : i == i*2;
		}
	}
	printf("Co %d so", demSo);
}//33550336

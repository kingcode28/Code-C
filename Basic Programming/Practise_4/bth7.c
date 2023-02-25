#include<stdio.h>
#include<math.h>

void soArmstrong(int n);
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	soArmstrong(n);
}

void soArmstrong(int n)
{
	int i, j, tong;
	if(n>100 && n<1000)
	{
		for(i=100; i<=n; i++)
		{
			tong = 0;
			for(j=i; j>0; j/=10)
				tong += pow(j%10, 3);
			if(tong == i)
				printf("%d ", tong);
		}
	}
	else
		printf("Nhap lai!");
}

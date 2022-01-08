#include<stdio.h>
main()
{
	int i, f1, f2, f3, n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	f1=f2=1;
	if(n >= 1)
	{
		if(n == 1)
			printf("%d ", f1);
		else
		{
			printf("%d %d ", f1, f2);
			for(i=3; i<=n; i++)
			{
				f3 = f1 + f2;
				printf("%d ", f3);
				f1 = f2;
				f2 = f3;
			}
		}
	}
	else
		printf("Nhap lai!");
} 

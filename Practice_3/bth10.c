#include <stdio.h>
main()
{
	int n, i, j, tong;
	printf("Nhap so: ");
	scanf("%d", &n);
	if(n >= 2)
	{
		for(i=2; i<=n; i++)
		{
			tong = 0;
			for(j=2; j<i; j++)
			{
				if(i%j == 0)
					tong += 1;
			}
			if(n%i == 0 && tong == 0)
				printf("%d ", i);
		}	
	}
	else
		printf("Nhap lai!");
}//994 2 7 71	

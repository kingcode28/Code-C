#include<stdio.h>
main()
{
	int i, n, tong;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	tong = 0;
	for(i=1; i<n; i++)
	{
		if(n%i == 0)
		{
			printf("%d ",i);
			tong += i;
		}
	}
	tong == n ? printf("La so hoan thien") : printf("Khong phai la so hoan thien");	
}

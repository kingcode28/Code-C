#include<stdio.h>
main()
{
	int n, donVi, tong;
	printf("Nhap n: ");
	scanf("%d", &n);
	tong = 0;
	while(n > 0)
	{
		donVi = n%10;
		if(donVi == 5)
			tong += 1;
		n /= 10;
	}
	printf("Co %d so 5", tong);
}

#include<stdio.h>
main()
{
	int n, tong;
	printf("Nhap n: ");
	scanf("%d", &n);
	tong = 0;
	while(n%10 == 0)
	{
		tong += 1;
		n /= 10;
	}
	printf("Co %d so khong dang sau", tong);
}

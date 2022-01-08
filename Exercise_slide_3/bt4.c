#include<stdio.h>
main()
{
	int n, tong;
	printf("Nhap so n: ");
	scanf("%d", &n);
	tong = 0;    
	for(; n>0;)
	{
		tong += n%10;
		n /= 10;
	}
	printf("Tong = %d", tong);
}

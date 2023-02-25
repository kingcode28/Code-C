#include<stdio.h>
main()
{
	int i, n, a, tong;
	printf("Nhap so n: ");
	scanf("%d", &n);
	tong = 0;
	a = n;
	while(a > 0)
	{
		i = a%10;
		tong = tong + (i*i*i);
		a /= 10;
	}
	if(tong == n)
		printf("La so amstrong");
	else
		printf("Khong phai la so amstrong");
}

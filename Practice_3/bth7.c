#include<stdio.h>
main()
{
	int i, n, tong;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	i = 1;  //cach 2
	tong = 0;
	while(i < n)
	{
		if(n%i == 0)
			tong += i;
			i++;
	}
	tong == n ? printf("La so hoan hao") : printf("Khong phai la so hoan hao");	
}

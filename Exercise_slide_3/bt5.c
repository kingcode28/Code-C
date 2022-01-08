#include<stdio.h>
main()
{
	int n, f1, f2, f3;
	printf("Nhap so n: ");
	scanf("%d", &n);
	if(n == 0)
		printf("%d", n);
	if(n >= 1)
	{
		f1=f2=1;
		printf("%d %d ", f1, f2);
		f3 = f2 + f1;
	}
	while(f3 <= n)
	{
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
	}
} 

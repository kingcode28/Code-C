#include<stdio.h>
main()
{
	int n, tong;
	printf("Nhap so n: ");
	scanf("%d", &n);
	tong = 0;     
	while(n > 0)  // cach 1
	{
		tong += n%10;
		n /= 10;
	}
 
	for(; n>0;)   // cach 2
	{
		tong += n%10;
		n /= 10;
	}

	if(n > 0)  // cach 3
	{
		do
		{
			tong += n%10;
			n /= 10;
		} while(n > 0);
	}
	
	
	printf("Tong = %d", tong);
}

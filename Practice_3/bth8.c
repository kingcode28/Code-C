#include<stdio.h>
main()
{
	int n, max;
	printf("Nhap so n: ");
	scanf("%d", &n);
	max = n%10;
	while(n > 0)
	{
		n /= 10;
		if(max < n%10)
			max = n%10;
	}
	printf("%d", max);
}

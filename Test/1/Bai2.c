#include<stdio.h>
main()
{
	int a, b, c;
	printf("Nhap vao ba so a, b, c: ");
	scanf("%d %d %d", &a,&b,&c);
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	while(a != c)
	{
		if(a > c)
			a -= c;
		else
			c -= a;
	}
	printf("USCLN: %d", a);
}

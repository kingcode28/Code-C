#include <stdio.h>
#include <math.h>
main()
{
	int a, b, c;
	float d, x1, x2;
	printf("Nhap a b c: ");
	scanf("%d %d %d", &a, &b, &c );
	d= b*b - 4*a*c;
	if( d > 0 ) 
	{
		x1 = (-b + sqrt(d) ) / 2*a;
		x2 = (-b - sqrt(d) ) / 2*a;
		printf("Phuong tring co 2 nghiem x1= %0.2f, x2 = %0.2f", x1, x2); 
	}
		else
			if ( d == 0 )
		{
			x1= -b/ (2 * a);
			printf(" x1 = x2 = %0.2f ",x1);
		}
		else
			printf("phuong trinh vo nghiem. ");
}

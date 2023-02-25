#include <stdio.h>
main()
{
	int a, b, c;
	printf("Nhap ba canh cua tam giac: ");
	scanf("%d %d %d", &a, &b, &c);
	if(a == b && b == c)
		printf("Tam giac deu");
	else
	{
		if(a*a + b*b == c*c && a == b || a*a + c*c == b*b && a == c || b*b + c*c == a*a && b == c)
			printf("Tam giac vuong can");
		else
		{
			if(a == b || b == c || a == c)
				printf("Tam giac can");
			else
			{
				if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
					printf("Tam giac vuong");
					else
					printf("Tam giac thuong");
			}
		}
	}
}

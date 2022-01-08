#include<stdio.h>
#include<math.h>

void listArmstrong();
main()
{
	listArmstrong();
}

void listArmstrong()
{
	int i, j, x, tong;
	for(i=100; i<1000; i++)
	{
		tong = 0;
		for(j=i; j>0; j/=10)
		{
			x = j%10;
			tong += pow(x, 3);
		}
		if(tong == i)
			printf("%d ", i);
	}
}


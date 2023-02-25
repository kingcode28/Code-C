#include<stdio.h>
#include<math.h>
main()
{
	int i, j, x, gt;
	float e, tong;
	printf("Nhap x: ");
	scanf("%d", &x);
	e = exp(x);
	tong = 0;
	i = 1;
	do
	{
		gt = 1;
		for(j=1; j<=i; j++)
			gt *= j;
		tong = tong + (pow(x,i) / gt);
		i++;
	} while(abs(pow(x,i) / gt) > 0.00001);
	printf("%f %d", tong+1, i);
}

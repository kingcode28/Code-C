#include<stdio.h>
main()
{
	int i, j, n, gt, gtLe, gtChan, bt;
	printf("Nhap so n: ");
	scanf("%d", &n);
	gtLe = 0;
	gtChan = 0;
	for(i=1; i<=n; i+=2)
	{
		gt = 1;
		for(j=1; j<=i; j++)
			gt *= j;
		gtLe += gt;
	}
	for(i=2; i<=n; i+=2)
	{
		gt = 1;
		for(j=1; j<=i; j++)
			gt *= j;
		gtChan += gt;
	}
	bt = gtLe - gtChan;
	printf("%d", bt);
}

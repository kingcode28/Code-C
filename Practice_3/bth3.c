#include<stdio.h>
main()
{
	int n, i, gt;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	gt = 1;
	for(i=n; i>1; i-=2)
		gt *= i;
	printf("%d! = %d", n, gt);
	
	
}

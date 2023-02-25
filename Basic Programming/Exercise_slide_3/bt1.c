#include <stdio.h>
main() {
	int i, n, gt;
	printf("Nhap n: ");
	scanf("%d", &n);
	gt = 1;	
	for (i=n; i>0; i-=2)
		gt *= i;
	printf("%d", gt);
} 

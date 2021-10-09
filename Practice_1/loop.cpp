#include <stdio.h>
main () {
	int n, uoc;
	printf("Nhap n: ");
	scanf("%d", &n);
	for(uoc = 1; uoc <= n; uoc++)
	{
		if(n % uoc == 0)
		{
			printf("%d ", uoc);
		}
	}
}

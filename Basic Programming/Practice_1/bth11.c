#include <stdio.h>
main() {
	int x, y, max;
	printf("Nhap vao 2 so x, y: ");
	scanf("%d %d", &x, &y);
	max = x > y ? x : y;
	printf("Max= %d", max);
}

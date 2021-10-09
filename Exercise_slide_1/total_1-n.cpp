#include <stdio.h>
main() {
	int soN, total;
	printf("Nhap vao 1 so: ");
	scanf("%d", &soN);
	total = soN*(soN+1)/2;
	printf("Tong: %d", total);
}

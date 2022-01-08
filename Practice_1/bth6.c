#include <stdio.h>
main() {
	int soN, tong;
	printf("Nhap vao 1 so: ");
	scanf("%d", &soN);
	tong = soN*(soN+1)/2;
	printf("Tong tu 1 den %d la: %d", soN, tong);
}

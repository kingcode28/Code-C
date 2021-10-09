#include <stdio.h>
main() {
	float chieuDai, chieuRong, chuVi, dienTich;
	printf("Nhap chieu dai, chieu rong: ");
	scanf("%f %f", &chieuDai, &chieuRong);
	chuVi = (chieuDai + chieuRong)*2;
	dienTich = chieuDai * chieuRong;
	printf("Chu vi: %f \nDien tich: %f", chuVi, dienTich);
}

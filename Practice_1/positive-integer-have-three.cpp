#include <stdio.h>
main() {
	int so, hangDonVi, hangChuc, hangTram;
	printf("Nhap so co 3 chu so: ");
	scanf("%d", &so);
	hangTram = so / 100;
	hangChuc = (so % 100) / 10;
	hangDonVi = so % 10;
	printf("Hang tram: %d \nHang chuc: %d \nHang don vi: %d", hangTram, hangChuc, hangDonVi);
}

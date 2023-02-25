#include <stdio.h>
#include <math.h>
main() {
	float so, canBac2, canBac4;
	printf("Nhap 1 so: ");
	scanf("%f", &so);
	canBac2 = sqrt(so);
	canBac4 = sqrt(sqrt(so));
	printf("Can bac 2 la: %.2f \nCan bac 4 la: %.2f",canBac2, canBac4);
}

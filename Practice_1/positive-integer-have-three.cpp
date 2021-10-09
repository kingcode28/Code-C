#include <stdio.h>
main() {
	int positiveInteger, units, dozens, hundreds;
	printf("Nhap so co 3 chu so: ");
	scanf("%d", &positiveInteger);
	hundreds = positiveInteger / 100;
	dozens = (positiveInteger % 100) / 10;
	units = positiveInteger % 10;
	printf("Hundreds: %d \nDozens: %d \nUnits: %d", hundreds, dozens, units);
}

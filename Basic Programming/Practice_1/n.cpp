#include <stdio.h>
main()
{
	int n, gio, phut, giay;
	printf("Nhap vao so giay: ");
	scanf("%d", &n);
	gio = n / 3600;
	phut = (n % 3600) / 60;
	giay = n % 60;
	printf("Bay gio là %02d:%02d:%02d", gio, phut, giay);
//	printf("Hang tram: %d\n", hangTram);
//	printf("Hang chuc: %d\n", hangChuc);
//	printf("Hang don vi: %d", donVi);
}

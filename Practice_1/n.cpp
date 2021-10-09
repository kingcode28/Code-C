#include <stdio.h>
main()
{
	int n, hangTram, hangChuc, donVi;
	printf(" Nhap so co 3 chu so: ");
	scanf("%d", &n);
	hangTram = n /100;
	hangChuc = (n % 100) / 10;
	donVi = n % 10;
	printf("Hang tram: %d\nHang chuc: %d\nHang don vi: %d", hangTram, hangChuc, donVi);
//	printf("Hang tram: %d\n", hangTram);
//	printf("Hang chuc: %d\n", hangChuc);
//	printf("Hang don vi: %d", donVi);
}

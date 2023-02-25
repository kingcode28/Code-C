#include <stdio.h>
main()
{
	int n, gio, phut, giay;
	printf("Nhap vao so giay: ");
	scanf("%d", &n);
	gio = n / 3600;
	phut = (n % 3600) / 60;
	giay = n % 60;
	printf("%02d:%02d:%02d", gio, phut, giay);
}

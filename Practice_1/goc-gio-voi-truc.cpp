#include <stdio.h>
main() {
	int gio, phut;
	float soDoGio, soDoPhut;
	printf("Nhap so gio, so phut: ");
	scanf("%d %d", &gio, &phut);
	soDoGio = (gio*60 + phut)*0.5;
	soDoPhut = phut*6;
	printf("So do gio: %f \nSo do phut: %f", soDoGio, soDoPhut);
}

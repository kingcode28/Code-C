#include <stdio.h>
#include <math.h>
main() {
	float x, y, z, dienTich, chuVi;
	printf("Nhap vao do dai ba canh cua tam giac: ");
	scanf("%f %f %f", &x, &y, &z);
	chuVi = x + y + z;
	dienTich = sqrt((chuVi/2)*(chuVi/2 - x)*(chuVi/2 - y)*(chuVi/2 - z));
	printf("Chu vi: %f \nDien tich: %f", chuVi, dienTich);
}

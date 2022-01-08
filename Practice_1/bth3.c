#include <stdio.h>
main() {
	float diemToan, diemVan, diemTin, diemTB;
	printf("Nhap diem mon toan, van, tin: ");
	scanf("%f %f %f", &diemToan, &diemVan, &diemTin);
	diemTB = (2*(diemToan + diemVan) + diemTin)/5;
	printf("Diem trung binh: %.2f", diemTB);
}  

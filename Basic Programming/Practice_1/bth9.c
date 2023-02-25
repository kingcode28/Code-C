#include <stdio.h>
main() {
	float chiSoCu, chiSoMoi, soLuongDien, tienDien, tienPhaiTra;
	printf("Nhap chi so dien thang truoc: ");
	scanf("%f", &chiSoCu);
	printf("Nhap chi so dien thang nay: ");
	scanf("%f", &chiSoMoi);
	soLuongDien = chiSoMoi - chiSoCu;
	tienDien = soLuongDien*1100;
	tienPhaiTra = tienDien + (tienDien/10);
	printf("So luong dien: %f\n", soLuongDien);
	printf("So tien phai tra: %fVND", tienPhaiTra);
}

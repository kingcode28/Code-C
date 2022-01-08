#include <stdio.h>
main() {
	float chuyenCan, quaTrinh, cuoiKy, tong;
	printf("Nhap vao diem chuyen can, diem qua trinh, diem cuoi ky: ");
	scanf("%f %f %f", &chuyenCan, &quaTrinh, &cuoiKy);
	tong = chuyenCan*0.1 + quaTrinh*0.4 + cuoiKy*0.5;
	if (tong >= 4)
		printf("Diem cua ban: %.2f\nChuc mung ban da qua mon!", tong);
	else
		printf("Diem cua ban: %.2f\nBan chua du dieu kien da qua mon.", tong);
} 

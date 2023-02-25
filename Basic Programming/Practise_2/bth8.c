#include <stdio.h>
main() {
	float diem, diem4;
	char diemChu;
	printf("Nhap vao diem mot mon hoc: ");
	scanf("%f", &diem);
	if (diem >= 9)
	{
		diem4 = 4;
		diemChu = 'A';
	}
	else if (diem >= 8 && diem < 9)
	{
		diem4 = 3.5;
		diemChu = 'a';
	}
	else if (diem >= 7 && diem < 8)
	{
		diem4 = 3;
		diemChu = 'B';
	}
	else if (diem >= 6 && diem < 7)
	{
		diem4 = 2.5;
		diemChu = 'b';
	}
	else if (diem >= 5 && diem < 6)
	{
		diem4 = 2;
		diemChu = 'C';
	}
	else if (diem >= 4 && diem < 5)
	{
		diem4 = 1.5;
		diemChu = 'c';
	}
	else
	{
		diem4 = 1;
		diemChu = 'F';
	}
	printf("Diem cua ban: %.1f\nDiem chu: %c", diem4, diemChu);
}

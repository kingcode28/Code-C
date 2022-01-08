#include <stdio.h>

float tienNhan(float tienGui, int soThang, float laiSuat);
int main()
{
	int soThang;
	float tienGui, laiSuat;
	printf("Nhap tien gui, so thang gui, lai suat: ");
	scanf("%f %d %f", &tienGui,&soThang,&laiSuat);
	printf("Tien nhan: %.4fVND", tienNhan(tienGui, soThang, laiSuat));
}

float tienNhan(float tienGui, int soThang, float laiSuat)
{
	int i;
	for(i=1; i<=soThang; i++)
		tienGui = tienGui + tienGui*laiSuat/100.0;
	return tienGui;
}


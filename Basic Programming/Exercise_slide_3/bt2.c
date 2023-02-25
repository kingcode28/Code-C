#include<stdio.h>
main()
{
	int i, thang;
	float tienGui, laiSuat;
	printf("Nhap vao tien gui, so thang gui, lai suat: ");
	scanf("%f %d %f", &tienGui,&thang,&laiSuat);
	i = 1;
	while(i <= thang)
	{
		tienGui = tienGui + tienGui*laiSuat/100;
		i++;
	}
	printf("So tien nhan sau %d thang gui la: %fVND", thang, tienGui);
}

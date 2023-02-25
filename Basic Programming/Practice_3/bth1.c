#include<stdio.h>
main()
{
	int i, thang;
	float tienGui, laiSuat;
	printf("Nhap vao tien gui, so thang gui, lai suat: ");
	scanf("%f %d %f", &tienGui,&thang,&laiSuat);
	for(i=1; i<=thang; i++)   // cách 1
	tienGui = tienGui + tienGui*laiSuat/100;

	i = 1;   // cách 2
	while(i <= thang)
	{
		tienGui = tienGui + tienGui*laiSuat/100;
		i++;
	}

	i = 1; // cách 3
	do
	{
		tienGui = tienGui + tienGui*laiSuat/100;
		i++;
	} while(i <= thang)
	
	printf("So tien nhan sau %d thang gui la: %fVND", thang, tienGui);
}

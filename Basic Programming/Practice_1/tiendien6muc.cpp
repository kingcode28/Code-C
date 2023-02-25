#include <stdio.h>
main() {
	int muc1=1418, muc2=1622, muc3=2044, muc4=2210, muc5=2361, muc6=2420;
	int chiSoCu, chiSoMoi, soDien, tienPhaiTra;
	printf("Nhap chi so dien cu: ");
	scanf("%d", &chiSoCu);
	printf("Nhap chi so dien moi: ");
	scanf("%d", &chiSoMoi);
	soDien = chiSoMoi - chiSoCu;
	if (soDien < 0)
	{
		printf("Nhap lai!\nSo tien dien khong the nho hon khong");
	}
	else if (soDien >= 0 && soDien <= 100)
	{
		tienPhaiTra = soDien*muc1;
	}
	else if (soDien > 100 && soDien <= 150)
	{
		tienPhaiTra = 100*muc1 + (soDien - 100)*muc2;
	}
	else if (soDien > 150 && soDien <= 200)
	{
		tienPhaiTra = 100*muc1 + 50*muc2 + (soDien - 150)*muc3;
	}
	else if (soDien > 200 && soDien <= 300)
	{
		tienPhaiTra = 100*muc1 + 50*muc2 + 50*muc3 + (soDien - 200)*muc4;
	}
	else if (soDien > 300 && soDien <= 400)
	{
		tienPhaiTra = 100*muc1 + 50*muc2 + 50*muc3 + 100*muc4 + (soDien - 300)*muc5;
	}
	else if (soDien > 400)
	{
		tienPhaiTra = 100*muc1 + 50*muc2 + 50*muc3 + 100*muc4 + 100*muc5 (soDien - 400)*muc6;
	}
	printf("\nSo tien phai tra la: %d", tienPhaiTra);
}

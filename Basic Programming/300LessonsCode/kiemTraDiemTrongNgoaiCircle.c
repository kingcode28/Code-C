#include <stdio.h>
#include <math.h>

int main()
{
	int xC, yC, xM, yM, banKinh;
	float khoangCach;
	printf("Nhap toa do tam C, ban kinh: ");
	scanf("%d %d %d", &xC, &yC,&banKinh);
	printf("Nhap toa do diem M: ");
	scanf("%d %d", &xM,&yM);
	khoangCach = sqrt(pow(xM-xC, 2) + pow(yM-yC, 2));
	if(khoangCach > banKinh)
		printf("Diem M nam ngoai duong tron");
	else
	{
		if(khoangCach == banKinh)
			printf("Diem M nam tren duong tron");
		else
			printf("Diem M nam trong duong tron");
	}
}
#include <stdio.h>
#include <math.h>
main() {
	float a, b, c, chuVi, dienTich;
	printf("Nhap vao ba canh cua tam giac: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a + b > c && a + c > b && b + c > a)
	{
		printf("Co the tao thanh tam giac\n");
		if (a == b && b == c)
		{
			printf("Tam giac deu ");
		}
		else if (a == b || b == c || a == c)
		{
			printf("Tam giac can ");
		}
		else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
		{
			printf("Tam giac vuong ");
		}
		else
		{
			printf("Tam giac thuong ");
		}
		chuVi = a + b + c;
		dienTich = sqrt(chuVi/2 * (chuVi/2 - a) * (chuVi/2 - b) * (chuVi/2 - c));
		printf("dien tich la: %f, chu vi la: %f", dienTich, chuVi);
	}
	else
	{
		printf("Khong phai la tam giac");
	}
}

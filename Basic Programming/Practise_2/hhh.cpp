#include <stdio.h>
main() {
	float so1, so2, so3, kq1, kq2;
	char pt1, pt2;
	printf("Nhap so1 phep tinh so2 phep tinh so3: ");
	scanf("%f %c %f %c %f", &so1, &pt1, &so2, &pt2, &so3);
	if (pt1 == '*' || pt1 == '/' || pt2 == '+' || pt2 == '-')
	{
		switch (pt1)
		{
			case '*': kq1 = so1 * so2; break;
			case '/': kq1 = so1 / so2; break;
			case '+': kq1 = so1 + so2; break;
			case '-': kq1 = so1 - so2; break;
		}
		switch (pt2)
		{
			case '+': kq2 = kq1 + so3; break;
			case '-': kq2 = kq1 - so3; break;
			case '*': kq2 = kq1 * so3; break;
			case '/': kq2 = kq1 / so3; break;
		}
	}
	else
	{
		switch (pt2)
		{
			case '*': kq1 = so2 * so3; break;
			case '/': kq1 = so2 / so3; break;
		}
		switch (pt1)
		{
			case '+': kq2 = so1 + kq1; break;
			case '-': kq2 = so1 - kq1; break;
		}
	}
	printf("%f %c %f %c %f = %f", so1, pt1, so2, pt2, so3, kq2);
} 

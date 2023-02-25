#include <stdio.h>
main() {
	int ngay, thang, nam;
	printf("Nhap vao thang: ");
	scanf("%d", &thang);
	printf("Nhap vao nam: ");
	scanf("%d", &nam);
	switch (thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngay = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngay = 30;
			break;
		case 2:
			if (nam % 4  != 0)
				ngay = 28;
			else
				ngay = 29;
			break;
		default:
			ngay = 0;
	}
	printf("Thang %d co %d ngay", thang, ngay);
}

#include <stdio.h>
main() {
	int a=31, b=30, c=29, d=28, thang, nam;
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
			printf("Thang %d cua nam %d co %d ngay!", thang, nam, a);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang %d cua nam %d co %d ngay!", thang, nam, b);
			break;
		case 2:
			if (nam % 4  != 0)
			{
				printf("Thang %d cua nam %d co %d ngay!", thang, nam, d);
			}
			else
			{
				printf("Thang %d cua nam %d co %d ngay!", thang, nam, c);
			}
			break;
		default:
			printf("Thang khong ton tai, nhap lai thang khac!");
	}
}

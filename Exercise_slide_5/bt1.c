#include <stdio.h>

int soNgay(int thang, int nam);
int main()
{
	int thang, nam;
	printf("Nhap thang, nam: ");
	scanf("%d %d", &thang,&nam);
	printf("So ngay: %d", soNgay(thang, nam));
}
int soNgay(int thang, int nam)
{
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			return (!(nam%4) && (nam%100) || !(nam%400)) ? 29 : 28;
		default:
			return 0;
	}
}

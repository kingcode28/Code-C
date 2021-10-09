#include <stdio.h>
#include <math.h>
main() {
	int radius, x1, x2, y1, y2, d, ;
	printf("Nhap ban kinh, toa do tam: ");
	scanf("%d %d %d", &radius, &x1, &y1);
	d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	if (d > radius)
		printf("Diem H nam ngoai duong tron");
	else if (d < radius)
		printf("Diem H nam trong duong tron");
	else
		printf("Diem H nam tren duong tron");
}

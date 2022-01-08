#include <stdio.h>
#include <math.h>

int main()
{
	int x1, x2, x3, y1, y2, y3;
	float AB, AC, BC;
	printf("Nhap 3 toa do cua tam giac: ");
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
	AB = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	AC = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
	BC = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	if (AB == AC && AC == BC)
	{
		printf("Tam giac deu");
	}
	else if (AB == AC || AB == BC || BC == AC && AB*AB + AC*AC == BC*BC || AB*AB + BC*BC == AC*AC || BC*BC + AC*AC == AB*AB)
	{
		printf("Tam giac vuong can");
	}
	else if(AB == AC || AB == BC || BC == AC)
	{
		printf("Tam giac can");
	}
	else if (AB*AB + AC*AC == BC*BC || AB*AB + BC*BC == AC*AC || BC*BC + AC*AC == AB*AB)
	{
		printf("Tam giac vuong");
	}
	else
	{
		printf("Tam giac thuong");
	}
}

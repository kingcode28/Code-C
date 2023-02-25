#include<stdio.h>
main()
{
	int x, y;
	printf("Nhap toa do x, y: ");
	scanf("%d %d", &x,&y);
	if(x == 0 && y == 0)
		printf("Tam truc toa do");
	else
	{
		if(x == 0 && y != 0)
			printf("Diem nam tren truc hoanh");
		else
		{
			if(x != 0 && y == 0)
				printf("Diem nam tren truc tung");
			else
				printf("Khong nam tren truc nao ca"); 
		}
	}
}

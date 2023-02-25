#include <stdio.h>
main() {
	int d1, m1, y1, d2, m2, y2;
	printf("Nhap vao ngay, thang, nam lan 1: ");
	scanf("%d %d %d", &d1, &m1, &y1);
	printf("Nhap vao ngay, thang, nam lan 2: ");
	scanf("%d %d %d", &d2, &m2, &y2);
	if(y1>y2 || y1==y2 && m1>m2 || y1==y2 && m1==m2 && d1>d2)
	{
		printf("Ngay mot lon hon ngay hai");
	}
	else if(y1==y2 && m1==m2 && d1==d2)
	{
		printf("Ngay mot bang ngay hai");
	}
	else
	{
		printf("Ngay mot be hon ngay hai");
	}
	
//	switch(y1)
//	{
//		case y1>y2:
////		case y1==y2 && m1>m2:
//			printf("Ngay mot lon hon ngay hai");break;
//		case y1<y2:
////		case y1==y2 && m1<m2:
//			printf("Ngay mot be hon ngay hai");break;
//		
//	}
}

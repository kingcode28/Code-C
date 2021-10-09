#include <stdio.h>
main() {
	int so, i;
	printf("Nhap so: ");
	scanf("%d", &so);
	if(so == 2)
	{
		printf("So %d la so nguyen to\n", so);
	}
	else
	{
		for(i = 2; i < so; i++)
		{
			if(so %i == 0)
			{
				printf("So %d khong phai la so nguyen to", so);
				break;
			}
			else
			{
				printf("So %d la so nguyen to", so);
				break;
			}
		}	
	}
}

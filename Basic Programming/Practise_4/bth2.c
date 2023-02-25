#include <stdio.h>
#include <math.h>

float Ex(int x);
int main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("E^x = %f", Ex(x));
}

float Ex(int x)
{
	int n;
	float ex, gt, lt;
	n = 0;
	ex = 0;
	lt = 1;
	gt = 1;
	// while(abs(lt/gt) >= 0.00001)
	// {
	// 	ex = ex + lt/gt;
	// 	n += 1;
	// 	lt *= x;
	// 	gt *= n;
	// }
	do
	{
		ex = ex + lt/gt;
		n += 1;
		lt *= x;
		gt *= n;
	} while(abs(lt/gt) >= 0.00001);
	return ex;
}


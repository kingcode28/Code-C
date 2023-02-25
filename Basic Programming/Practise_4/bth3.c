#include <stdio.h>
#include <math.h>

float tinhSinX(int x);

int main()
{
	int x;
	printf("Nhap x: ");
	scanf("%d", &x);
	printf("SinX = %f\n", tinhSinX(x));
	printf("%f", sin(x));
}

float tinhSinX(int x)
{
	int n;
	float  lt, gt, sinX;
	n = gt = 1;
	lt = x;
	sinX = 0;
	do
	{
		sinX = sinX + lt/gt;
		n += 2;
		lt = (-1)*lt*x*x;
		gt = gt * n*(n-1);
	} while(fabs(lt/gt) >= 0.00001);
	return sinX;
}


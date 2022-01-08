#include<stdio.h>

int checkFibonacii(int n);
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(checkFibonacii(n) == 1)
		printf("%d co trong day fibonacii", n);
	else
		printf("%d khong co trong day fibonacii", n);
}

int checkFibonacii(int n)
{
	int f1, f2, f3;
	if(n < 1)
		return 0;
	else
	{
		if(n == 1)
			return 1;
		else
		{
			f1=f2=1;
			f3 = f1+f2;
			while(f3 < n)
			{
				f1=f2;
				f2=f3;
				f3 = f1+f2;
			}
			if(f3 == n)
				return 1;
			else
				return 0;
		}
	}
}

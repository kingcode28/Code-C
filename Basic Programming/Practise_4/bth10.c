#include <stdio.h>

void lietKeSoNguyenTo(int n);
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	lietKeSoNguyenTo(n);
}

void lietKeSoNguyenTo(int n)
{
	int i, j, tong;
	for(i=2; i<=n; i++)
	{
		for(tong=0, j=2; j<= (i+1)/2; )
		{
			if(i%j != 0) j++;
			else
			{
				tong++;
				break;
			}
		}
		if(tong == 0)
			printf("%d ", i);
	}
}


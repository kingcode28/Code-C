#include<stdio.h>

void capSoNuyenToCungNhau(int n);
int USCLN();
main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	capSoNguyenToCungNhau(n);
}

void capSoNguyenToCungNhau(int n)
{
	int i, j, a;
	for(i=2; i<n; i++)
	{
		for(j=i; j<n; j++)
		{
			a = USCLN(i, j);
			if(a == 1)
				printf("(%d,%d) ", i, j);
		}
	}
}
int USCLN(int i, int j)
{
	int a, b;
	a = i;
	b = j;
	while(a != b)
	{
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}


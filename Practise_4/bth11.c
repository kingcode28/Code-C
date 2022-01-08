#include<stdio.h>

int laSNT(int so);
int nguyenToThuN(int n);

int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(nguyenToThuN(n) == 0)
		printf("Nhap lai!");
	else
		printf("%d", nguyenToThuN(n));
}

// int nguyenToThuN(int n)
// {
// 	int i, j, tong, so=2;
// 	if(n == 1)
// 		return 2;
// 	else
// 	{
// 		for(i=2; i<=n; )
// 		{
// 			so++;
// 			tong = 0;
// 			for(j=2; j<= (so+1)/2; )
// 			{
// 				if(so%j != 0) j++;
// 				else
// 				{
// 					tong++;
// 					break;
// 				}
// 			}
// 			if(i == n && !tong) return so;
// 			if(!tong) i++;
// 		}
// 	}
// }
int laSNT(int so)
{
	if(so == 2) return 1;
	if(so%2 == 0) return 0;
	for(int i = 3; i*i <= so; i += 2)
		if(so%i == 0) return 0;
	return 1;
}
int nguyenToThuN(int n)
{
	if(n == 1) return 2;
	else
	{
		int i, dem = 1;
		for(i = 3; ; i += 2)
		{
			if(laSNT(i)) dem++;
			if(dem == n) return i;
		}
	}	
}
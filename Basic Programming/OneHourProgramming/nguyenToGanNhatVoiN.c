#include<stdio.h>

int kiemTraUoc(int i, int j);
int nguyenToNhoHonN(int n);
int nguyenToLonHonN(int n);
int main()
{
	int n, hieu1, hieu2; 
	printf("Nhap n: ");
	scanf("%d", &n);
	hieu1 = n - nguyenToNhoHonN(n);
	hieu2 = nguyenToLonHonN(n) - n;
	if(hieu1 > hieu2)
		printf("%d", nguyenToLonHonN(n));
	else
		printf("%d", nguyenToNhoHonN(n));
}

int nguyenToNhoHonN(int n)
{
	int i, j, tong;
	for(i=n; ; i--)
	{
		tong = kiemTraUoc(i, j);
		if(tong == 0)
			return i;
	}
}
int nguyenToLonHonN(int n)
{
	int i, j, tong;
	for(i=n; ; i++)
	{
		tong = kiemTraUoc(i, j);
		if(tong == 0)
			return i;
	}
}
int kiemTraUoc(int i, int j)
{
	int tong = 0;
	for(j=2; j<i; j++)
	{
		if(i%j == 0)
			j++;
			break;
	}
	return tong;
}

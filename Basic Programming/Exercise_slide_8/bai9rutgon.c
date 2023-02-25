#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char hoTen[50];
};
void nhap(struct SinhVien *a)
{
    gets(a->hoTen);
}
void tenDemHo(struct SinhVien a, char *tenDem)
{
	int i, j, n; char *p;
	n = strlen(a.hoTen);
	p = strstr(a.hoTen, " ");
	j = p - a.hoTen;
	i = n-1;
	while (i>=0 && a.hoTen[i]!=' ') i--;
	strcpy(tenDem, a.hoTen + i + 1);
	strncpy(tenDem + n - i - 1, p, i - j + 1);
	strncpy(tenDem + n - j, a.hoTen, i);
	tenDem[n]='\0';
}
int main()
{
    struct SinhVien sv;
    char ten;
    char tendemho[50];
    nhap(&sv);
    printf("%d\n", strlen(sv.hoTen));
    tenDemHo(sv, tendemho);
    puts(tendemho);
    printf("%d", strlen(tendemho));
}


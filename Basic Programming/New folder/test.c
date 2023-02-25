#include <stdio.h>

struct SinhVien 
{
	char hoTen[30];
	int namSinh;
};

void nhapSV (struct SinhVien s)
{
	printf("Ho va Ten: ");
	gets(s.hoTen);
	printf("Nam sinh: ");
	scanf("%d", &s.namSinh);
	fflush(stdin);
}
void inSV (struct SinhVien s)
{
	printf("Sinh vien lon hon: %s", s.hoTen);
}

main()
{
	struct SinhVien s1, s2;
	nhapSV(s1);
	nhapSV(s2);
	if(s1.namSinh <= s2.namSinh)
		inSV(s1);
	else
		inSV(s2);
}

#include <stdio.h>
main() {
	char kiTu;
	printf("Nhap vao mot ki tu: ");
	scanf("%c", &kiTu);
	if (kiTu >= '0' && kiTu <= '9')
	{
		printf("La chu so");
	}
	else if (kiTu >= 'a' && kiTu <= 'z' || kiTu >= 'A' && kiTu <= 'Z')
	{
		printf("La chu cai");
	}
	else 
	{
		printf("Ki tu khac");
	}
}

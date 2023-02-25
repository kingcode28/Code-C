#include <stdio.h>
main() {
	int a, b;
	char phepToan;
	printf("Nhap so a, phep tinh, b: ");
	scanf("%d %c %d", &a, &phepToan, &b);
	switch (phepToan)
	{
		case '+': printf("Phep toan %d + %d = %d", a , b, a+b); break;
		case '-': printf("Phep toan %d - %d = %d", a, b, a-b); break;
		case '*': printf("Phep toan %d * %d = %d", a, b, a*b); break;
		case '/':
			if(b != 0)
			{
				printf("Phep toan %d / %d = %d", a, b, a/b);	
			}
			else
			{
				printf("Mau so khong the bang khong");
			}
			break;
	}
}

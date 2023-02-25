#include <stdio.h>
main() {
	int a, b;
	char phepToan;
	float bieuThuc;
	printf("Nhap so a, phep tinh, b: ");
	scanf("%d %c %d", &a, &phepToan, &b);
	switch (phepToan)
	{
		case '+': bieuThuc = a + b; break;
		case '-': bieuThuc = a - b; break;
		case '*': bieuThuc = a * b; break;
		case '/':
			if(b != 0)
			{
				bieuThuc = a / b;	
			}
			else
			{
				printf("Mau so khong the bang khong");
			}
			break;
	}
	printf("Bieu thuc %d %c %d = %f", a, phepToan, b, bieuThuc);
}

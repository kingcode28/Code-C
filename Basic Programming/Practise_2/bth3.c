#include <stdio.h>
main() {
	int a, b, c, max;
	printf("Nhap vao ba so a, b, c: ");
	scanf("%d %d %d", &a, &b, &c);
	max = a;
	max = max < b ? (max < c ? c : b) : (max < c ? c : a);
	printf("Max = %d", max);
} 

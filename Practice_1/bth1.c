#include <stdio.h>
main() {
	int a, theTich, dienTichTP, dienTichXQ;
	printf("Nhap canh cua khoi lap phuong: ");
	scanf("%d", &a);
	dienTichXQ = (a * a)*4;
	dienTichTP = (a * a)*6;
	theTich = a*a*a;
	printf("Dien tich xung quanh: %d \n", dienTichXQ);
	printf("Dien tich toan phan: %d \n", dienTichTP);
	printf("The tich: %d", theTich);
}

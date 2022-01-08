#include <stdio.h>
main() {
	float r, h, dienTichXQ, dienTichTP, theTich;
	printf("Nhap vao ban kinh, chieu cao: ");
	scanf("%f %f", &r, &h);
	dienTichXQ = 2*3.14*r*h;
	dienTichTP = 2*3.14*r*(r + h);
	theTich = 3.14*r*r*h;
	printf("Dien tich xung quanh cua hinh tru la: %f \n", dienTichXQ);
	printf("Dien tich toan phan cua hinh tru la: %f \n", dienTichTP);
	printf("The tich cua hinh tru la: %f", theTich);
}

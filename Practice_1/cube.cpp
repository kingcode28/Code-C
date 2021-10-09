#include <stdio.h>
main() {
	int a, volume, superficiality_TP, superficiality_SQ;
	printf("Nhap canh cua khoi lap phuong: ");
	scanf("%d", &a);
	superficiality_SQ = (a * a)*4;
	superficiality_TP = (a * a)*6;
	volume = a*a*a;
	printf("Dien tich xung quanh: %d \nDien tich toan phan: %d \nThe tich: %d", superficiality_SQ, superficiality_TP, volume);
}

 #include <stdio.h>
main() {
	char kiTu1, kiTu2;
	int khoangCach ;
	printf(" Nhap hai ki tu: ");
	scanf("%c %c", &kiTu1, &kiTu2);
	khoangCach = abs(kiTu1 - kiTu2);
	printf("khoang cach: %d", khoangCach);
}

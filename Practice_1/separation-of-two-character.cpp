#include <stdio.h>
#include <math.h>
main() {
	char characterOne, characterTwo, separation;
	printf("Nhap 2 ki tu: ");
	scanf("%c %c", &characterOne, &characterTwo);
	separation = abs(characterOne - characterTwo);
	printf("Khoang cach giua hai ki tu: %d", separation);
}

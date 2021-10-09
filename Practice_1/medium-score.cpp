#include <stdio.h>
main() {
	int mathScore, literaryScore, informaticScore;
	float mediumScore;
	printf("Nhap diem mon toan, van, tin: ");
	scanf("%d %d %d", &mathScore, &literaryScore, &informaticScore);
	mediumScore = (2*(mathScore + literaryScore) + informaticScore)/5.0;
	printf("Diem trung binh: %.2f", mediumScore);
}

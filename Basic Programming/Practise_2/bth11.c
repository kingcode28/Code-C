#include <stdio.h>
main() {
	int so;
	char chu[15] = "khong";
	printf("Nhap mot so tu 0 den 100: ");
	scanf("%d", &so);
	printf("%s", chu);
	if (so >= 0 && so <= 9)
	{
		switch (so)
		{
			case 0: printf("Khong"); break;
			case 1: printf("Mot"); break;
			case 2: printf("Hai"); break;
			case 3: printf("Ba"); break;
			case 4: printf("Bon"); break;
			case 5: printf("Nam"); break;
			case 6: printf("Sau"); break;
			case 7: printf("Bay"); break;
			case 8: printf("Tam"); break;
			case 9: printf("Chin"); break;
		}
	}
	else if (so >= 10 && so <= 100)
	{
		switch (so / 10)
		{
			case 1: printf("Muoi "); break;
			case 2: printf("Hai muoi "); break;
			case 3: printf("Ba muoi "); break;
			case 4: printf("Bon muoi "); break;
			case 5: printf("Nam muoi "); break;
			case 6: printf("Sau muoi "); break;
			case 7: printf("Bay muoi "); break;
			case 8: printf("Tam muoi "); break;
			case 9: printf("Chin muoi "); break;
			case 10: printf("Mot tram"); break;
		}
		switch (so % 10)
		{
			case 1: printf("mot"); break;
			case 2: printf("hai"); break;
			case 3: printf("ba"); break;
			case 4: printf("bon"); break;
			case 5: printf("lam"); break;
			case 6: printf("sau"); break;
			case 7: printf("bay"); break;
			case 8: printf("tam"); break;
			case 9: printf("chin"); break;
		}
	}
	else
	{
		printf("So vua nhap khong thoa. Nhap lai!");
	}
}

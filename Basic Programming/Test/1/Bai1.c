#include<stdio.h>
main()
{
	char kyTu;
	printf("Nhap mot ky tu: ");
	scanf("%c", &kyTu);
	if(kyTu>='a' && kyTu<='z' || kyTu>='A' && kyTu<='Z')
		printf("Chu cai");
	else
		if(kyTu>=0 && kyTu<=9)
			printf("Ky tu so");
		else
			if(kyTu=='+' || kyTu=='-' || kyTu=='*' || kyTu=='/' || kyTu=='%')
				printf("Phep tinh");
			else
				printf("Ky tu khac");
}

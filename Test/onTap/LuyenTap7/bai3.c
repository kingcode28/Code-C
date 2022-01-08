#include <stdio.h>
#include <string.h>

void xauDaoNguoc(char *xau)
{
    for(int i = strlen(xau); i >= 0; i--)
        printf("%c", xau[i]);
    xau[strlen(xau)] = '\0';
}
int demKiTuHoa(char *xau)
{
    int dem = 0;
    for(int i = 0; i < strlen(xau); i++)
        if(xau[i] >= 'A' && xau[i] <= 'Z') dem++;
    return dem;
}
int main()
{
    char xau[50];
    printf("Nhap xau: "); gets(xau);
    xauDaoNguoc(xau);
    printf("\nCo %d ki tu hoa", demKiTuHoa(xau));
}
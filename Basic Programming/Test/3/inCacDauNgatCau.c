#include <stdio.h>
#include <string.h>

void inViTriCacDauNgatCau(char *xau);
void tachHoTen(char *xau, char *hoTen)
{
    char *a;
    a = strstr(xau, ":");
    strncpy(hoTen, xau, a-xau);
    hoTen[a-xau] = '\0';
}

int main()
{
    char x[] = "Do Thanh Hau:0344943353";
    char hoTen[40];
    tachHoTen(x, hoTen);
    puts(hoTen);
}
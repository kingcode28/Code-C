#include <stdio.h>
#include <string.h>

void thayNguyenAmBangSao(char *xau);
void tachSDT(char *xau, char *SDT)
{
    char *a;
    a = strstr(xau, ":");
    strcpy(SDT, a+1);
}
int main()
{
    char tt[] = "Do Thanh Hau:0344943353";
    char sdt[11];
    tachSDT(tt, sdt);
    puts(sdt);
}
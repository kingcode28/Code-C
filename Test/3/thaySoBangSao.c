#include <stdio.h>
#include <string.h>

void thayKiTuSoBangKiTuSao(char *xau);
int kiemTraXauDoiXung(char *xau)
{
    int i;
    for(i=0; i<= strlen(xau)/2; i++)
        if(xau[i] != xau[strlen(xau)-i-1]) return 0;
    return 1;
}

int main()
{
    char s[] = "Hau8uaH";
    printf(kiemTraXauDoiXung(s) ? "Co" : "Khong");
}
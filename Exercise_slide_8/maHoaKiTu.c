#include <stdio.h>
#include <string.h>

void maHoaKiTu(char *xau);

int main()
{
    char xau[255];
    gets(xau);
    maHoaKiTu(xau);
    puts(xau);
}

void maHoaKiTu(char *xau)
{
    int i;
    for(i=0; i<strlen(xau); i++)
    {
        switch(xau[i])
        {
            case 'a': xau[i] = 'e'; break;
            case 'e': xau[i] = 'i'; break;
            case 'i': xau[i] = 'o'; break;
            case 'o': xau[i] = 'u'; break;
            case 'u': xau[i] = 'a'; break;
        }
    }
}
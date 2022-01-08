#include <stdio.h>

int kiemTraKiTu(char n)
{
    if(n >= 'A' && n <= 'Z' || n >= 'a' && n <= 'z')
    {
        switch(n)
        {
            case 'u': case 'e': case 'o': case 'a': case 'i':
            case 'U': case 'E': case 'O': case 'A': case 'I':
                return 1;
            default: return 0;
        }
    }
    return -1;
}

int main()
{
    char n;
    printf("Nhap ki tu: "); scanf("%c", &n);
    if(kiemTraKiTu(n) == 1) printf("La nguyen am");
    else if(kiemTraKiTu(n) == 0) printf("La phu am");
    else printf("Ki tu khac");
}
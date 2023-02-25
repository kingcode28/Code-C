#include <stdio.h>
#include <string.h>

int laNguyenAm(char n);
int check2KiTuCanhNhauCoLaNguyenAm(char *x);

int main()
{
    int ketQua;
    char xau[] = "hahahaa";
    ketQua = check2KiTuCanhNhauCoLaNguyenAm(xau);
    printf(ketQua ? "Co" : "Khong");
}

int laNguyenAm(char n)
{
    switch(n)
    {
        case 'u': case 'e': case 'o': case 'a': case 'i':
        case 'U': case 'E': case 'O': case 'A': case 'I':
            return 1;
        default:
            return 0;
    }
}
int check2KiTuCanhNhauCoLaNguyenAm(char *x)
{
    int i;
    for(i=0; i< strlen(x)-1; i++)
        if(laNguyenAm(x[i]) && laNguyenAm(x[i+1]))
            return 1;
    return 0;
}
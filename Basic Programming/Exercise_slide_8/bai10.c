#include <stdio.h>
#include <string.h>

void soLanXuatHienCuaTungNguyenAm(char *xau);

int main()
{
    char s[] = "Do Thanh Hau";
    soLanXuatHienCuaTungNguyenAm(s);
}

void soLanXuatHienCuaTungNguyenAm(char *xau)
{
    int i;
    int demU, demE, demO, demA, demI;
    demU = demE = demO = demA = demI = 0;
    for(i=0; i<strlen(xau); i++)
    {
        switch(xau[i])
        {
            case 'u': case 'U': demU++; break;
            case 'e': case 'E': demE++; break;
            case 'o': case 'O': demO++; break;
            case 'a': case 'A': demA++; break;
            case 'i': case 'I': demI++; break;
        }
    }
    printf("u %d lan\n", demU);
    printf("e %d lan\n", demE);
    printf("o %d lan\n", demO);
    printf("a %d lan\n", demA);
    printf("i %d lan\n", demI);
}
    
    
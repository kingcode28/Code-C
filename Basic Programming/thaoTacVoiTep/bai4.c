#include <stdio.h>
#include <string.h>

int laNguyenAm(char s)
{
    if(s >= 'A' && s <= 'z')
    {
        switch(s)
        {
            case 'u': case 'e': case 'o': case 'a': case 'i':
            case 'U': case 'E': case 'O': case 'A': case 'I':
                return 1;
            default: return 0;
        }
    }
}
void ghiTep(char a[])
{
    int i;
    FILE *f;
    f = fopen("D:\\Data\\Bai11KieuTep\\nguyenam.txt", "w");
    for(i=0; i<strlen(a); i++)
        if(laNguyenAm(a[i]))
            fprintf(f, "%c", a[i]);
    fclose(f);
}
int docTep()
{
    int p, dem = 0;
    char s;
    FILE *f;
    f = fopen("D:\\Data\\Bai11KieuTep\\nguyenam.txt", "r");
    do
    {
        p = fscanf(f, "%c", &s);
        if(p != EOF && s == 'a')
            dem++;
    } while (p != EOF);
    fclose(f);
    return dem;
}
int main()
{
    char a[30];
    gets(a);
    ghiTep(a);
    printf("%d", docTep());
}

#include <stdio.h>
#include <string.h>

int demNguyenAm(char *x);

int main()
{
    char a[20];
    printf("Nhap ten cua ban: ");
    fgets(a, sizeof a, stdin);
    puts(a);
    printf("%d", demNguyenAm(a));
}

int demNguyenAm(char *x)
{
    int i, dem=0;
    for(i=0; i< strlen(x); i++)
    {
        switch(x[i])
        {
            case 'u':
            case 'e':
            case 'o':
            case 'a':
            case 'i':
                dem++;
        }
    }
    return dem;
}
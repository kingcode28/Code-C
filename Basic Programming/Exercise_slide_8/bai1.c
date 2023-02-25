#include <stdio.h>
#include <string.h>

int demKiTuHoa(char *xau);

int main()
{
    char xau[20];
    gets(xau);
    printf("%d", demKiTuHoa(xau));
}

int demKiTuHoa(char *xau)
{
    int i, dem=0;
    for(i=0; i<strlen(xau); i++)
        if(xau[i] >= 'A' && xau[i] <= 'Z') dem++;
    return dem;
}
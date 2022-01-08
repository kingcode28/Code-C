#include <stdio.h>
#include <string.h>

void inCacPhepToan(char *xau);
void tachDem(char *xau, char *dem)
{
    int i, j;
    char *a;
    a = strstr(xau, " ");
    for(j= strlen(xau)-1; j>=0; j--)
        if(xau[j] == ' ') break;
    if(a-xau == j) dem = NULL;
    else 
    {
        strncpy(dem, a+1, j-(a+1-xau));
        dem[j-(a+1-xau)] = '\0';
    }
}

int main()
{
    char hoTen[] = "Do Thanh Hau";
    char dem[40];
    tachDem(hoTen, dem);
    puts(dem);
}
#include <stdio.h>
#include <string.h>

void tachHo(char *hoTen, char *ho);
void tachTen(char *hoTen, char *ten);
void tachDem(char *hoTen, char *dem);
void ghepTenDemHo(char *hoTen, char *ten, char *dem, char *ho, char *tenDemHo);

int main()
{
    char hoTen1[] = "Do Thanh Hau",
         hoTen2[] = "Do Duy Phap";
    char ho[10], ten[10], dem[20], tenDemHo1[40], tenDemHo2[40];
    ghepTenDemHo(hoTen1, ten, dem, ho, tenDemHo1);
    ghepTenDemHo(hoTen2, ten, dem, ho, tenDemHo2);
    if(strcmp(tenDemHo1, tenDemHo2) < 0)
    {
        puts(hoTen1);
        puts(hoTen2);
    }
    else
    {
        puts(hoTen2);
        puts(hoTen1);
    }
}

void tachHo(char *hoTen, char *ho)
{
    char *a;
    a = strstr(hoTen, " ");
    strncpy(ho, hoTen, a-hoTen);
    ho[a-hoTen] = '\0';
}
void tachTen(char *hoTen, char *ten)
{
    int i;
    i = strlen(hoTen)-1;
    while(i >= 0 && hoTen[i] != ' ') i--;
    strcpy(ten, hoTen+i+1);
}
void tachDem(char *hoTen, char *dem)
{
    int i;
    char *a;
    a = strstr(hoTen, " ");
    while(i >= 0 && hoTen[i] != ' ') i--;
    strncpy(dem, a, (hoTen+i+1)-a);
}
void ghepTenDemHo(char *hoTen, char *ten, char *dem, char *ho, char *tenDemHo)
{
    tachHo(hoTen, ho);
    tachTen(hoTen, ten);
    tachDem(hoTen, dem);
    strcat(ten, strcat(dem, ho));
    strcat(tenDemHo, ten);
}



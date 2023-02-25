#include <stdio.h>
#include <string.h>

void tachHo(char *hoTen, char *ho);

int main()
{
    char hoTen[50], ho[10];
    gets(hoTen);
    tachHo(hoTen, ho);
    puts(ho);
}
void tachHo(char *hoTen, char *ho)
{
    char *a;
    a = strstr(hoTen, " ");
    strncpy(ho, hoTen, a-hoTen);
    ho[a-hoTen] = '\0';
}
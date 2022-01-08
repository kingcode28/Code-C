#include <stdio.h>
#include <string.h>

void tachEmail(char *xau, char *email)
{
    char *a;
    a = strstr(xau, ":");
    strcpy(email, a+1);
}
int main()
{
    char tt[] = "Do Thanh Hau:thanhhaudoa7@gmail.com";
    char email[100];
    tachEmail(tt, email);
    puts(email);
}
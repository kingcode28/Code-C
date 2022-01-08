#include <stdio.h>
#include <string.h>

void tachTen(char *hoTen, char *ten);

int main()
{
    char hoTen[] = "le quy";
    char ten[10];
    tachTen(hoTen, ten);
    puts(ten);
}

void tachTen(char *hoTen, char *ten)
{
    int i;// le quy\0 = 6
    printf("%d\n", strlen(hoTen));
    i = strlen(hoTen)-1;// = 5
    printf("%x\n", i);
    for(i; i>=0; i--)
    {
        printf("%x\n", hoTen+i);
        if(hoTen[i] == ' ') break;
    }
    printf("%d\n", i);
    printf("%x\n", i);
    printf("%x\n", hoTen);
    printf("%x\n", hoTen+1);
    printf("%x\n", hoTen+2);
    printf("%x\n", hoTen+3);
    printf("%x\n", hoTen+4);
    printf("%x\n", hoTen+5);
    strcpy(ten, hoTen+i+1);
}
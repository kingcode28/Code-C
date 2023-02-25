#include <stdio.h>

void bangCuuChuong();
int main()
{
    int i, j;
    printf("Bang cuu chuong\n");
    for (i=1; i<= 10; ++i)
    {
        for (j=2; j<= 9; ++j)
            printf("%c%2dx%2d=%2d", 179, j, i, i*j);
        printf("%c\n", 179);
    }
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char Nguoi, May;
    int n=0, m=0;
    srand(time(NULL));
    do
    {
        printf("Nhap b, d, k (ki tu khac de thoat): ");
        scanf("%c", &Nguoi);
        fflush(stdin);  //  khác Linux
      //  while(getchar() != '\n') { } dành cho Linux
        switch(Nguoi)
        {
            case 'b': 
                switch(rand()%3)
                {
                    case 0: May = 'd'; n++; break;
                    case 1: May = 'k'; m++; break;
                    case 2: May = 'b';
                }
                break;
            case 'd': 
                switch(rand()%3)
                {
                    case 0: May = 'k'; n++; break;
                    case 1: May = 'b'; m++; break;
                    case 2: May = 'd';
                }
                break;
            case 'k':
                switch(rand()%3)
                {
                    case 0: May = 'b'; n++; break;
                    case 1: May = 'd'; m++; break;
                    case 2: May = 'k';
                }
                break;
            default: return 0;
        }
        printf("May: %c\n", May);
        printf("Ti so nguoi %d - may %d\n", n, m);
    } while ( 1 );
}
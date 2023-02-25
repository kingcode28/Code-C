#include <stdio.h>

int main()
{
    int x, y, z;
    for(x=1; x< 100/5; x++)
    {
        for(y=1; y< 100/3; y++)
        {
            z= 100-x-y;
            if(15*x + 9*y + z == 300)
                printf("(%d, %d, %d)\n", x,y,z);
        }
    }
}

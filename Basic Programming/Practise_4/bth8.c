#include<stdio.h>

void tongLapPhuong3So();
main()
{
	tongLapPhuong3So();
}

void tongLapPhuong3So()
{
	int x, y, z;
	for(x=1; x<22; x++)
	{
		for(y=0; y<22; y++)
		{
			for(z=0; z<22; z++)
			{	
				if(x*x*x + y*y*y + z*z*z == 10000)
					printf("(%d;%d;%d)\n", x,y,z);
			}
		}
	}
}

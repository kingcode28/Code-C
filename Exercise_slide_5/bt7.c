#include <stdio.h>
#include <math.h>

void checkSoArmstrong(int i);
int main()
{
	int i;
	for(i=100; i<1000; i++)
		checkSoArmstrong(i);
}

void checkSoArmstrong(int i)
{
	int j, tong=0;
	for(j=i; j>0 && tong<=i; j/=10)
		tong += pow(j%10, 3);
	if(tong == i) printf("%d ", i);
}

#include <stdio.h>
#include <math.h>

int checkSoArmstrong(int i);
int main()
{
	int i;
	for(i=100; i<1000; i++)
		if(checkSoArmstrong(i) == 1)
			printf("%d ", i);
}

int checkSoArmstrong(int i)
{
	int j, tong=0;
	for(j=i; j>0 && tong<=i; j/=10)
		tong += pow(j%10, 3);
	return tong == i ? 1 : 0;
}


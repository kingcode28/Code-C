#include <stdio.h>
 
int giaiThua(int n) 
{
    if(n == 0)
		return 1;
    return giaiThua(n-1)*n;
}
 
int main() {
    int n = 5;
    printf("%d! = %d",n, giaiThua(n));
    return 0;
}

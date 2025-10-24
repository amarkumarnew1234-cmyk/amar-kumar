//1.    Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>
int x=10;
void amar()
{
    int y=20;
    printf("Inside test: x=%d y=%d\n",x,y);
}
int main()
{
    int z=30;
    printf("Inside main: x=%d z=%d\n",x,z);
    amar();
    return 0;
}

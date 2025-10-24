//3.    Declare variables within different code blocks (enclosed by curly braces) and test their accessibility within and outside those blocks.
#include <stdio.h>
int main(){
int a=10;
{
int b=20;
printf("a=%d\n",a);
printf("b=%d\n",b);
}
printf("a=%d\n",a);
//this gives error as it declared inside the box. [printf("b=%d\n",b);]
return 0;
}
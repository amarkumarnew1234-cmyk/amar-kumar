//2.    Declare a local variable inside a function and try to access it outside the function. 
//Compare this with accessing the global variable from within the function.
#include <stdio.h>
int x=10;
void amar(){
int y=20;
printf("y=%d\n",y);
printf("x=%d\n",x);
}
int main(){
amar();
printf("x=%d\n",x);
return 0;
}
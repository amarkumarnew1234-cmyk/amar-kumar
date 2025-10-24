//4.    Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>
void amar(){
static int count=1;
printf("count=%d\n",count);
count++;
}
int main(){
amar();
amar();
amar();
return 0;
}
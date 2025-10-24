/*
3.    Write a function that accepts pointers as parameters. 
Pass variables by reference using pointers and modify their values within the function.
*/
#include <stdio.h>
void modify(int *x,int *y){
*x=*x+10;
*y=*y*2;
}
int main(){
int a=5,b=7;
printf("Before modification: a=%d b=%d\n",a,b);
modify(&a,&b);
printf("After modification: a=%d b=%d\n",a,b);
return 0;
}

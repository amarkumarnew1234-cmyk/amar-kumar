/*
2.    Perform pointer arithmetic (increment and decrement) on pointers of different data types. 
Observe how the memory addresses change and the effects on data access.
*/
#include<stdio.h>
int main(){
int a=5;
float b=5.5;
char c='A';
int *p1=&a;
float *p2=&b;
char *p3=&c;
printf("Initial address and value of int pointer:\n");
printf("p1=%p,*p1=%d\n",p1,*p1);
p1++;
printf("After increment: p1=%p\n",p1);
p1--;
printf("After decrement: p1=%p\n\n",p1);
printf("Initial address and value of float pointer:\n");
printf("p2=%p,*p2=%.2f\n",p2,*p2);
p2++;
printf("After increment: p2=%p\n",p2);
p2--;
printf("After decrement: p2=%p\n\n",p2);
printf("Initial address and value of char pointer:\n");
printf("p3=%p,*p3=%c\n",p3,*p3);
p3++;
printf("After increment: p3=%p\n",p3);
p3--;
printf("After decrement: p3=%p\n",p3);
return 0;
}

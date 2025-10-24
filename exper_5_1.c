/*
1.    Declare different types of pointers (int, float, char) and initialize them with the addresses of variables. 
Print the values of both the pointers and the variables they point to.
*/
#include <stdio.h>
int main() {
    int a=5;
    float b=5.5;
    char c='A';
    int *pointer1;
    float *pointer2;
    char *pointer3;
    pointer1=&a;
    pointer2=&b;
    pointer3=&c;
    printf("Value of a=%d\n",a);
    printf("Value of b=%f\n",b);
    printf("Value of c=%c\n",c);
    printf("Address of p1=%p\n",pointer1);
    printf("Address of p2=%p\n",pointer2);
    printf("Address of p3=%p\n",pointer3);
    printf("Value pointed by p1=%d\n",*pointer1);
    printf("Value pointed by p2=%f\n",*pointer2);
    printf("Value pointed by p3=%c\n",*pointer3);
    return 0;
}

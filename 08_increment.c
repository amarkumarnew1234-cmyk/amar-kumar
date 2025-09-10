#include<stdio.h>
int main(){
    int a=5,b=10;
    printf("%d%d\n",a,b);
    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",++b);
    printf("%d\n",b++);
    printf("%d\n",(a++)+(++b));
    return 0;
}
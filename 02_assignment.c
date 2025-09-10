#include<stdio.h>
int main(){
    int x=8;
    x+=2;
    x-=2;
    x*=2;
    x/=2;
    x%=2;
    printf("%d%d%d%d%d",x,x,x,x,x); 
    /* 
    here it takes x=8 
    8+2=10   
    10-2=8
    8*2=16
    16/2=8
    8%2=0
    so output showing 0 and 5 times because i have written %d 5 times 
    */
    return 0;
}
#include<stdio.h>
int main(){
    if(1)
    {
        printf("This is executed");
    }
    if(234)   //in c a non-zero value considered to be true
    {
        printf("This is also executed");
    } 
    if(0)
    {
        printf("Not executed");  //In C, 0 means false.Therefore, this block does NOT execute
    }
    return 0;
}
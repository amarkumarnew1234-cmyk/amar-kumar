#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nAddition=%d",a+b);
    printf("\nSubtraction=%d",a-b);
    printf("\nMultiplication=%d",a*b);
    printf("\nDivision=%d",a/b);
    printf("\nModulus=%d",a%b);
    /*
    can we write as such 
    printf("Addition=%d\nSubtraction=%d\nMultiplication=%d\nDivision=%d\nModulus=%d,a+b,a-b,a*b,a/b,a%b");
    */
    return 0;
}
#include<stdio.h>
int main (){
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",a,b);
    if(a>0 && b>0)
     {printf("both are positive");
    }
    else if(a>0 || b>0)
    {printf("Atleast one is positive");
    }
    else
    {("both are negative");}
    return 0;
        
}
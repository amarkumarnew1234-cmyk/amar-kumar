#include<stdio.h>
int main (){ 
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)
    {printf("geratest:%d\n",a);
    }
    else if(b>=a && b>=c)
    {printf("greatest:%d\n",b);
    }
    else
    {printf(" greatest:%d\n",c);
    }
    return 0;
}
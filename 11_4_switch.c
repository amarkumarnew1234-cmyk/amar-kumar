#include<stdio.h>
int main(){
    int n1,n2,sum,diff,choice;
    printf("enter 1st number");
    scanf("%d",&n1);
    printf("enter 2nd number");
    scanf("%d",&n2);
    printf("MENU:\n 1.Addition\n 2.Subtraction\n");
    printf("Enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: sum=n1+n2;
                printf("Sum=%d",sum);
                break;
                case 2: diff=n1-n2;
                printf("diff=%d",diff);
                break;
                  
        default: printf("Invalid choice");
        break;

                
    }
    return 0;
}

//2.    WAP to read a list of integers and store it in a single dimensional array. 
//Write a C program to count and display positive, negative, odd, and even numbers in an array.
#include<stdio.h>
int main(){
int n,i;
int positive=0,negative=0,odd=0,even=0;
printf("Enter no. of elements");
scanf("%d",&n);
int arr[n];
printf("Enter %d integers",n);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);}
        for(i=0;i<n;i++) {
        if(arr[i]>0)
        {positive++;}
        else if(arr[i]<0)
        {negative++;}
        if(arr[i] % 2 == 0)
        {even++;}
        else
        {odd++;}
    }
    printf("Positive no.%d\n",positive);
    printf("Negative no.%d\n",negative);
    printf("Even no.%d\n",even);
    printf("Odd no.%d\n",odd);
    return 0;
}
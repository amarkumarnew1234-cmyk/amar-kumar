//1.    WAP to read a list of integers and store it in a single dimensional array. 
//Write a C program to print the second largest integer in a list of integers.
#include <stdio.h>
int main() {
    int n,i,largest,secondlargest;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d integers\n",n);
    for(i=0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest=secondlargest=arr[0];
    for(i=1;i<n;i++) {
        if(arr[i]>largest) {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i] != largest) {
            secondlargest=arr[i];
        }
    }
    printf("Second largest integer is %d\n", secondlargest);
    return 0;
}

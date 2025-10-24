/*1.    Develop a recursive and non-recursive function FACT(num) to find the factorial of a number, n!, defined by FACTNo = 1, if n = 0. 
Otherwise, FACTNo = n * FACT(n-1). Using this function, write a C program to compute the binomial coefficient. 
Tabulate the results for different values of n and r with suitable messages.
*/
#include <stdio.h>
int factorial_recursive(int n) {
    if(n == 0)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}
int factorial_nonrecursive(int n) {
    int i, factorial=1;
    for(i=1;i<=n;i++) {
        factorial=factorial*i;
    }
    return factorial;
}
int main() {
    int n,r,choice;
    printf("Enter valur of n and r");
    scanf("%d%d",&n,&r);
    if(r>n || n<0 || r<0) {
        printf("Input are not valid");
        return 0;
    }
    printf("Choose method:\n1. Recursive\n2.Non-Recursive\nEnter choice: ");
    scanf("%d",&choice);
    int ncr;
    if(choice == 1)
        ncr = factorial_recursive(n) / (factorial_recursive(r)*factorial_recursive(n - r));
    else
        ncr = factorial_nonrecursive(n) / (factorial_nonrecursive(r)*factorial_nonrecursive(n - r));
    printf("n=%d\t  r=%d\t   factorial%d\n", n, r, ncr);
    return 0;
}

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (!(n >= 10 && n <= 100)) 
    {
        printf("Invalid number!\n");
    } 
    else 
    {
        printf("Valid number!\n");
    }

    return 0;
}

/*
5.    Develop a function REVERSE (str) that accepts a string argument. 
Write a C program that invokes this function to find the reverse of a given string.
*/
#include <stdio.h>
void REVERSE(char str[]) {
    int start = 0;
    int end = 0;
    char temp;
    while (str[end] != '\0') {
        end++;
    }
    end = end - 1;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    REVERSE(str);
    printf("Reversed string is: %s\n", str);
    return 0;
}


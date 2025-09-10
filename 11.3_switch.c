#include<stdio.h>
int main(){
    char grade;
    printf("Enter your grade");
    scanf("%c",&grade);
    switch(grade)
    {
        case 'a':
        printf("Excellent");
        break;
        case 'b':
        printf("Very good");
        break;
        case 'c':
        printf("good");
        break;
        case 'd':
        printf("you need to improve");break;
        default:
        printf("invalid grade");
        break;

    }
    return 0;
}
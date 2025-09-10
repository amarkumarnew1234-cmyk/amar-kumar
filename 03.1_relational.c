#include<stdio.h>
int main(){
    int a;
    printf("%d\n",5<10<2);//Many beginners think it compares 5 < 10 < 2 as a chain (like in math), but in C that’s not the case.
    //5<10 will give 1 (true), now,1<2 also true so answer is 1
    return 0;
}
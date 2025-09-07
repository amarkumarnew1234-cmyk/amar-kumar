#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("Enter length and breadth of recatngle");
    scanf("%d%d",length,breadth); 
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area of rectangle=%d\n perimeter of rectangle=%d\n",area,perimeter);
    return 0;
}
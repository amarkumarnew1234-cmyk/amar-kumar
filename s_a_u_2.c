#include<stdio.h>
struct Emp {
    char name[50];
    float basic;
    float gross;
};
int main() {
    struct Emp e[100];
    int i;
    for(i=0;i<100;i++) {
        printf("Enter name:");
        scanf("%s",e[i].name);
        printf("Enter basic pay:");
        scanf("%f",&e[i].basic);
        e[i].gross=e[i].basic+(0.52*e[i].basic);
    }
    printf("\nEmployee Gross Salary:\n");
    for(i=0;i<100;i++) {
        printf("%s:%.2f\n",e[i].name,e[i].gross);
    }
    return 0;
}

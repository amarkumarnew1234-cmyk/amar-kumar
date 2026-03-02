#include <stdio.h>
union Address {
    char name[50];
    char home[50];
    char hostel[50];
    char city[50];
    char state[50];
    char zip[10];
};
int main() {
    union Address a;
    printf("Enter your present address: ");
    scanf("%s", a.home);
    printf("Your Present Address: %s\n", a.home);
    return 0;
}

#include <stdio.h>
int main() {
    int eng, math;
    printf("Enter English marks: ");
    scanf("%d", &eng);
    printf("Enter Math marks: ");
    scanf("%d", &math);
     if (eng >= 40 || math >= 40) {
        printf("Pass at least one subject");
    }
     else 
     {
        printf("Fail both subjects");
    }
    return 0;
}

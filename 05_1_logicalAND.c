#include <stdio.h>
int main() {
    int a = 5, b = -3, c = 0;

    printf("%d\n", (a > 0 && b > 0 || c == 0));
    printf("%d\n", (!(a > 0) || b < 0));
    printf("%d\n", (!(c) && (a + b > 0)));

    return 0;
}

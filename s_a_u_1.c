#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
struct Complex read_complex() {
    struct Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imag);
    return c;
}
void write_complex(struct Complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}
struct Complex add_complex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}
struct Complex sub_complex(struct Complex a, struct Complex b) {
    struct Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}
int main() {
    struct Complex c1 = read_complex();
    struct Complex c2 = read_complex();
    printf("First complex number: ");
    write_complex(c1);
    printf("Second complex number: ");
    write_complex(c2);
    struct Complex sum = add_complex(c1, c2);
    struct Complex diff = sub_complex(c1, c2);
    printf("Sum: ");
    write_complex(sum);
    printf("Difference: ");
    write_complex(diff);
    return 0;
}

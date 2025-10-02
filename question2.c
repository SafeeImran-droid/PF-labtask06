#include <stdio.h>

int main() {
    int a, b, mul = 0, div = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 0; i < b; i++)
        mul += a;

    int temp = a;
    while(temp >= b) {
        temp -= b;
        div++;
    }

    printf("Multiplication = %d\n", mul);
    printf("Division = %d\n", div);

    return 0;
}

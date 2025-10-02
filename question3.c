#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    first = num;
    for(; first >= 10; first /= 10);

    printf("Sum of first and last digit = %d\n", first + last);

    return 0;
}

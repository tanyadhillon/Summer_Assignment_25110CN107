#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;

    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}
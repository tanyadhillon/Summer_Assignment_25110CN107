#include <stdio.h>
#include <math.h>

int main() {
    int start, end, num, temp, remainder;
    int digits, result;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong Numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++) {
        temp = num;
        digits = 0;
        result = 0;

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
            printf("%d ", num);
    }

    return 0;
}
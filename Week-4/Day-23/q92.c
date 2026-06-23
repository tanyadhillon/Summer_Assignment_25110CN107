#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c\n", ch);
    printf("Frequency: %d\n", max);

    return 0;
}
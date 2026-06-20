#include <stdio.h>

int main() {
    int n, arr[100], i, j, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate elements are: ");

    for(i = 0; i < n; i++) {
        found = 0;

        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                found = 1;
                break;
            }
        }

        if(found) {
            continue;
        }

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}
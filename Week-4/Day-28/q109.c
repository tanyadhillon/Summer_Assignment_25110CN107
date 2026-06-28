#include <stdio.h>
#include <string.h>

struct Library {
    char book[50];
    int issued;
};

int main() {

    struct Library l;
    int choice;

    l.issued = 0;

    do {
        printf("\n1. Add Book");
        printf("\n2. Issue Book");
        printf("\n3. Return Book");
        printf("\n4. Display Book");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                printf("Enter book name: ");
                scanf("%s",l.book);
                printf("Book added\n");
                break;

            case 2:
                if(l.issued==0) {
                    l.issued=1;
                    printf("Book issued\n");
                }
                else
                    printf("Already issued\n");
                break;

            case 3:
                l.issued=0;
                printf("Book returned\n");
                break;

            case 4:
                printf("Book: %s\n",l.book);
                if(l.issued)
                    printf("Status: Issued\n");
                else
                    printf("Status: Available\n");
                break;
        }

    } while(choice!=5);

    return 0;
}
#include<stdio.h>

struct Contact{

    char name[50];
    char phone[15];

};


int main(){

    struct Contact c;
    int choice;


    do{

        printf("\n1.Add Contact");
        printf("\n2.Display Contact");
        printf("\n3.Exit");

        printf("\nEnter choice:");
        scanf("%d",&choice);


        switch(choice){

            case 1:

                printf("Name:");
                scanf("%s",c.name);

                printf("Phone:");
                scanf("%s",c.phone);

                printf("Contact saved\n");

                break;


            case 2:

                printf("Name: %s",c.name);
                printf("\nPhone: %s",c.phone);

                break;
        }

    }while(choice!=3);


    return 0;
}
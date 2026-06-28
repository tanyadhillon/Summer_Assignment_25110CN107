#include<stdio.h>

struct Ticket {

    char movie[50];
    int seats;

};

int main(){

    struct Ticket t;
    int choice;


    do{

        printf("\n1.Book Ticket");
        printf("\n2.Display Ticket");
        printf("\n3.Exit");

        printf("\nChoice:");
        scanf("%d",&choice);


        switch(choice){

            case 1:

                printf("Movie name:");
                scanf("%s",t.movie);

                printf("Number of seats:");
                scanf("%d",&t.seats);

                printf("Ticket booked\n");

                break;


            case 2:

                printf("Movie: %s",t.movie);
                printf("\nSeats: %d",t.seats);

                break;

        }

    }while(choice!=3);


    return 0;
}
#include<stdio.h>

struct Bank {
    int acc;
    char name[50];
    float balance;
};

int main(){

    struct Bank b;
    int choice;
    float amount;

    do{

        printf("\n1.Create Account");
        printf("\n2.Deposit");
        printf("\n3.Withdraw");
        printf("\n4.Display");
        printf("\n5.Exit");

        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch(choice){

            case 1:
                printf("Account number:");
                scanf("%d",&b.acc);

                printf("Name:");
                scanf("%s",b.name);

                printf("Balance:");
                scanf("%f",&b.balance);

                break;


            case 2:
                printf("Amount:");
                scanf("%f",&amount);

                b.balance += amount;
                break;


            case 3:
                printf("Amount:");
                scanf("%f",&amount);

                if(amount<=b.balance)
                    b.balance-=amount;
                else
                    printf("Insufficient balance");

                break;


            case 4:
                printf("\nAccount: %d",b.acc);
                printf("\nName: %s",b.name);
                printf("\nBalance: %.2f",b.balance);

                break;
        }

    }while(choice!=5);

    return 0;
}
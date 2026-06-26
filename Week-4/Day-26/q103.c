#include <stdio.h>

int main()
{
    int pin = 1234, enteredPin;
    int balance = 10000;
    int choice, amount;

    printf("Enter PIN: ");
    scanf("%d",&enteredPin);

    if(enteredPin != pin)
    {
        printf("Wrong PIN");
        return 0;
    }

    printf("\n1. Check Balance");
    printf("\n2. Withdraw Money");
    printf("\n3. Deposit Money");

    printf("\nEnter choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            printf("Balance = %d", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%d",&amount);

            if(amount <= balance)
            {
                balance -= amount;
                printf("Collect your cash");
                printf("\nRemaining balance = %d",balance);
            }
            else
                printf("Insufficient balance");

            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%d",&amount);

            balance += amount;
            printf("Updated balance = %d",balance);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
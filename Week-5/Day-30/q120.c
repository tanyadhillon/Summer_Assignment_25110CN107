#include <stdio.h>

void add();
void display();

int id[100], marks[100], n=0;
char name[100][50];

int main()
{
    int choice;

    do
    {
        printf("\n1.Add Record");
        printf("\n2.Display Record");
        printf("\n3.Exit");
        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Exit");
                break;

            default:
                printf("Invalid");
        }

    }while(choice!=3);

    return 0;
}


void add()
{
    printf("Enter ID: ");
    scanf("%d",&id[n]);

    printf("Enter Name: ");
    scanf("%s",name[n]);

    printf("Enter Marks: ");
    scanf("%d",&marks[n]);

    n++;
}


void display()
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nID: %d",id[i]);
        printf("\nName: %s",name[i]);
        printf("\nMarks: %d",marks[i]);
    }
}
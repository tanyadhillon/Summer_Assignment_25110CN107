#include <stdio.h>

int main()
{
    int roll[100], marks[100], n=0, choice, i;
    char name[100][50];

    do
    {
        printf("\n1.Add Student");
        printf("\n2.Display Students");
        printf("\n3.Search Student");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Roll No: ");
                scanf("%d",&roll[n]);

                printf("Enter Name: ");
                scanf("%s",name[n]);

                printf("Enter Marks: ");
                scanf("%d",&marks[n]);

                n++;
                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("\nRoll: %d",roll[i]);
                    printf("\nName: %s",name[i]);
                    printf("\nMarks: %d\n",marks[i]);
                }
                break;

            case 3:
            {
                int r,found=0;
                printf("Enter roll no: ");
                scanf("%d",&r);

                for(i=0;i<n;i++)
                {
                    if(roll[i]==r)
                    {
                        printf("Name: %s Marks: %d",name[i],marks[i]);
                        found=1;
                    }
                }

                if(!found)
                    printf("Student not found");

                break;
            }

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid choice");
        }

    }while(choice!=4);

    return 0;
}
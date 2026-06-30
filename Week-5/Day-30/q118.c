#include <stdio.h>

int main()
{
    int id[100], issued[100], n=0, choice, i;
    char book[100][50];

    do
    {
        printf("\n1.Add Book");
        printf("\n2.Display Books");
        printf("\n3.Issue Book");
        printf("\n4.Exit");
        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Book ID: ");
                scanf("%d",&id[n]);

                printf("Book Name: ");
                scanf("%s",book[n]);

                issued[n]=0;
                n++;
                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("\n%d %s ",id[i],book[i]);

                    if(issued[i])
                        printf("Issued");
                    else
                        printf("Available");
                }
                break;

            case 3:
            {
                int x;
                printf("Enter book id: ");
                scanf("%d",&x);

                for(i=0;i<n;i++)
                {
                    if(id[i]==x)
                        issued[i]=1;
                }
                printf("Book issued");
                break;
            }

            case 4:
                printf("Exit");
                break;
        }

    }while(choice!=4);

    return 0;
}
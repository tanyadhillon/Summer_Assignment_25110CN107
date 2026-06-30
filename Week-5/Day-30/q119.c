#include <stdio.h>

int main()
{
    int id[100], salary[100], n=0, choice, i;
    char name[100][50];

    do
    {
        printf("\n1.Add Employee");
        printf("\n2.Display Employee");
        printf("\n3.Search Employee");
        printf("\n4.Exit");
        printf("\nChoice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("ID: ");
                scanf("%d",&id[n]);

                printf("Name: ");
                scanf("%s",name[n]);

                printf("Salary: ");
                scanf("%d",&salary[n]);

                n++;
                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",id[i]);
                    printf("\nName: %s",name[i]);
                    printf("\nSalary: %d",salary[i]);
                }
                break;

            case 3:
            {
                int x;
                printf("Enter ID: ");
                scanf("%d",&x);

                for(i=0;i<n;i++)
                {
                    if(id[i]==x)
                        printf("%s %d",name[i],salary[i]);
                }
                break;
            }

            case 4:
                printf("Exit");
                break;
        }

    }while(choice!=4);

    return 0;
}
#include <stdio.h>

int main()
{
    int id[100], qty[100], n=0, choice, i, search;
    char name[100][50];

    do
    {
        printf("\n1.Add Product");
        printf("\n2.Display Products");
        printf("\n3.Search Product");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter ID: ");
                scanf("%d",&id[n]);

                printf("Enter Name: ");
                scanf("%s",name[n]);

                printf("Enter Quantity: ");
                scanf("%d",&qty[n]);

                n++;
                printf("Product Added");
                break;

            case 2:
                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",id[i]);
                    printf("\nName: %s",name[i]);
                    printf("\nQuantity: %d",qty[i]);
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d",&search);

                for(i=0;i<n;i++)
                {
                    if(id[i]==search)
                    {
                        printf("Product Found");
                        printf("\nName: %s",name[i]);
                        printf("\nQuantity: %d",qty[i]);
                    }
                }
                break;

            case 4:
                printf("Exit");
                break;

            default:
                printf("Invalid");
        }

    }while(choice!=4);

    return 0;
}
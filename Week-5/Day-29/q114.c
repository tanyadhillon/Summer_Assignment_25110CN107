#include <stdio.h>

int main()
{
    int arr[100], n, choice, sum, i, x, found;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    do
    {
        printf("\n1.Display");
        printf("\n2.Sum");
        printf("\n3.Search");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                    printf("%d ",arr[i]);
                break;

            case 2:
                sum=0;
                for(i=0;i<n;i++)
                    sum+=arr[i];
                printf("Sum = %d",sum);
                break;

            case 3:
                printf("Enter element: ");
                scanf("%d",&x);

                found=0;
                for(i=0;i<n;i++)
                {
                    if(arr[i]==x)
                        found=1;
                }

                if(found)
                    printf("Found");
                else
                    printf("Not Found");
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
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice,i;

    printf("Enter string: ");
    gets(str);

    do
    {
        printf("\n1.Length");
        printf("\n2.Reverse");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Length = %d",strlen(str));
                break;

            case 2:
                for(i=strlen(str)-1;i>=0;i--)
                    printf("%c",str[i]);
                break;

            case 3:
                printf("%s",str);
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
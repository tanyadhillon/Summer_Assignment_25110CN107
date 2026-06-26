#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("QUIZ APPLICATION\n");

    printf("\n1. C language was developed by?");
    printf("\n1) Dennis Ritchie  2) James Gosling  3) Bjarne Stroustrup");
    printf("\nEnter answer: ");
    scanf("%d",&answer);

    if(answer == 1)
        score++;

    printf("\n2. Which symbol is used for comments in C?");
    printf("\n1) //  2) ##  3) **");
    printf("\nEnter answer: ");
    scanf("%d",&answer);

    if(answer == 1)
        score++;

    printf("\n3. Which is a loop in C?");
    printf("\n1) repeat  2) for  3) iterate");
    printf("\nEnter answer: ");
    scanf("%d",&answer);

    if(answer == 2)
        score++;

    printf("\nYour score = %d/3", score);

    return 0;
}
#include <stdio.h>

int main()
{
    char s[100], ans[100];
    int i,j,k=0,found;

    scanf("%s", s);

    for(i=0; s[i]!='\0'; i++)
    {
        found=0;

        for(j=0; j<k; j++)
        {
            if(s[i]==ans[j])
            {
                found=1;
                break;
            }
        }

        if(found==0)
        {
            ans[k]=s[i];
            k++;
        }
    }

    ans[k]='\0';

    printf("%s", ans);

    return 0;
}
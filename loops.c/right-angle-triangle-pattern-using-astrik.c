#include <stdio.h>

int main()
{
    int i,j,line;

    printf("Enter the number of lines\n");
    scanf("%d",&line);

    for(i=1;i<=line;i++)

    {
        for(j=1; j<=i ;j++)
            printf("*");
        printf("\n");

    }
    return 0;
}

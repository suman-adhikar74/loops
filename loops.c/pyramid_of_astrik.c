#include<stdio.h>


int main()
{
    int  n,j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (rows=1; rows<=n; rows++)
    {

        for (j=1; j<=n-rows; ++j)
            printf(" ");
        {

        for(j=1;j<=rows;j++)
         printf("* ");
        }
        printf("\n");
    }
    return 0;
}

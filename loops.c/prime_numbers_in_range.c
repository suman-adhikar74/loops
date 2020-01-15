#include <stdio.h>

int main()
{
    int j,i,m;

    printf("Enter the num upto which you want to print prime num \n");
    scanf("%d",&m);
    for(j=2;j<=m;j++)
    {

     i=2;
    while(j%i!=0)
    {
        i++;
    }

    if(i==j)
    {
        printf("%d\t",j) ;
        }

  }
    return 0;
}

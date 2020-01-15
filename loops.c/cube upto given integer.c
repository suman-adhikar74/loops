#include <stdio.h>

int main()
{
    int n,i,cube;

    printf("enter the numer upto which you want cube\n");
    scanf("%d",&n);

   for(i=1;i<=n;i++)
     { cube=i*i*i;


   printf("\t%d\n",cube);
}
    return 0;
}

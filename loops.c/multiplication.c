#include <stdio.h>

int main()
{
    int n,i,x;

    printf("enter a number\n");
    scanf("%d",&n);

   for(i=1;i<=10;i++)
     { x=n*i;


   printf("%d * %d = %d\n",n,i,x);
}
    return 0;
}

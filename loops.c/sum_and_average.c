#include <stdio.h>

int main()
{
int i,n,sum=0,average;
printf("Enter term upto which you want to add =");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    sum+=i;
}
average=sum/n;

    printf("sum upto %d terms is %d and average is %d \n",n,sum,average);


    return 0;
}

#include<stdio.h>
#include<conio.h>
int main( )
{
int num, temp, rem, sum,count=0;



printf("Armstrong numbers between 1 and 1000 are:\n");
for(num=1; num<=1000; num++)
{
temp=num;
sum=0;
while(temp>0)

{
   rem=temp%10;
   sum=sum+(rem*rem*rem);
   temp=temp/10;
}

if(num==sum)
{
  printf("\n%d", num);
   count++;
}

}
   printf("%d\n\n",count);
  return 0;
}

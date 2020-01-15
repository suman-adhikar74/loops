#include <stdio.h>
int main()
{
   int i,n;
   double s=0.0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\n\n");
   for(i=1;i<=n;i++)
   {
       if(i<n)
       {
     printf("1/%d + ",i);
     s+=1/(double)i;
       }
     if(i==n)
     {
     printf("1/%d ",i);
     s+=1/(double)i;
     }
     }
        printf("\nSum of Series upto %d terms : %lf \n",n,s);
}

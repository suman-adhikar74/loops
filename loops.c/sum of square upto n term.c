#include <stdio.h>


int main() {
   int n ;
   int sum = 0;

   printf("Enter the number of terms\n");
   scanf("%d",&n);

   for (int i=1; i <= n; i++)
      sum += (i * i);

printf("square upto %d terms is %d\n",n,sum);
return 0;
}

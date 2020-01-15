#include <stdio.h>
int main() {
    int n, i, num = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i)

    {
        // condition for non-prime
        if (n % i == 0) {
            num = 1;
            break;
        }
    }


    if (n == 1)
    {
        printf("1 is neither prime nor composite.\n\n");
    }
    else {
        if (num == 0)
            printf("%d is a prime number.\n\n", n);
        else
            printf("%d is not a prime number.\n\n", n);
    }
    return 0;
}

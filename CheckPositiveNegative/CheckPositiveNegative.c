#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("Entered number is zero");
        else
            printf("Entered number is negative.");
    }
    else
        printf("Entered number is positive.");
    return 0;
}

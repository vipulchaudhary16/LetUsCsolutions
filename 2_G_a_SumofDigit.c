#include <stdio.h>

int main()
{

    int k, dig1, dig2, dig3, dig4, dig5, sumOfDigit;

    printf("Enter the 5 digit number  ");
    scanf("%d", &k);

    dig1 = k % 10;
    k = k / 10;
    dig2 = k % 10;
    k = k / 10;
    dig3 = k % 10;
    k = k / 10;
    dig4 = k % 10;
    k = k / 10;
    dig5 = k % 10;

    sumOfDigit = dig1 + dig2 + dig3 + dig4 + dig5;

    printf("The sum of digits of enterd number %d is = %d", k, sumOfDigit);

    return 0;
}
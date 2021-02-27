#include <stdio.h>
#include <math.h>

int main()
{

    float angle;

    printf("Enter the value of angle in radian ");
    scanf("%f", &angle);

    printf(" the sin of angle %f is %.2f  \n", angle, sin(angle));
    printf(" the cos of angle %f is %.2f \n", angle, cos(angle));
    printf(" the tan of angle %f is %.2f \n", angle, tan(angle));
    printf(" the cot of angle %f is %.2f \n", angle, 1 / tan(angle));
    printf(" the cosec of angle %f is %.2f \n", angle, 1 / sin(angle));
    printf(" the sec of angle %f is %.2f \n", angle, 1 / cos(angle));

    return 0;
}
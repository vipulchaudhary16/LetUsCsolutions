#include <stdio.h>
#include<math.h>

int main()
{

    float  L1, L2, G1, G2 ;
    double D , L1_in_rad, L2_in_rad, G1_in_rad, G2_in_rad;

    printf("Enter the value of latitue in degree  \n");
    scanf("%f  %f", &L1, &L2);
    printf("Enter the value of longitude in degree ");
    scanf("%f  %f", &G1, &G2);

    L1_in_rad = L1 * (3.14 / 180);
    L2_in_rad = L2 * (3.14 / 180);
    G1_in_rad = G2 * (3.14 / 180);
    G2_in_rad = G2 * (3.14 / 180);

    D = 3963 * (acos(sin(L1_in_rad) * sin(L2_in_rad) + cos(L1_in_rad) * cos(L2_in_rad) * cos(G2 - G1)));

    printf("The distance beetween these Longitude and latitude is %f", D);

    return 0;
}
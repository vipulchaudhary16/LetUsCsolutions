#include <stdio.h>
#include<math.h>

int main(){

int x , y ;
double r , Theeta;

printf("Enter the x cordinates : ");
scanf("%d", &x);
printf("Enter the y cordinates : ");
scanf("%d", &y);

r = sqrt(x*x + y*y);
Theeta = atan(y/x);

// we will get theeta in radian 

printf("The polar cordinates of (%d, %d) is = (%f , %f)",x,y,r,Theeta);


return 0;
}
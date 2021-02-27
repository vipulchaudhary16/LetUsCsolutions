#include <stdio.h>

int main(){

int a , b , t=0;

printf("Enter the two number  ");
scanf("%d %d", &a, &b);

printf("The two number before interchange is a = %d b = %d \n ", a , b);

t=a;
a=b;
b= t;

printf("The two number after interchange is a = %d b = %d ", a , b);


return 0;
}
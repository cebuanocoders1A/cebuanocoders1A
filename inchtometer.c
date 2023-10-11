/*This converts inch to meter
Written by: Joshua Miguel G. Jamisola
Date: 10/10/2023
*/
#include<stdio.h>
int main()
{
    //local Declarations
    float inches;
    float meter;
//proccess
    meter = inches / 39.37;

printf("This converts inches to meter\n");
printf("Input the inches ");
scanf("%f", &inches);

meter = inches / 39.37;
printf("The meter is: %.2f meter",meter);

return 0;

}
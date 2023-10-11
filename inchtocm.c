/*This program converts inches to centimeter
Written by: Joshua Miguel G. Jamisola
Date: 10/10/2023
*/
#include<stdio.h>
int main()
{
    //local Declarations
    float inches;
    float cm;

    cm = inches * 2.54;

printf("This converts inches to cm \n");
printf("Input the inches ");
scanf("%f", &inches);
 
 cm = inches *2.54;
printf("The cm is: %.2f cm",cm);

return 0;
}
/*This program converts inch to feet
Written by: Joshua Miguel G. Jamisola
Date 10/10/2023
*/
#include<stdio.h>
int main()
{
//local Declarations
 float inches;
 float foot;

 foot = inches /12;

printf("This converts inches to foot\n");
printf("Input the inches ");
scanf("%f", &inches);

foot = inches /12;
printf("The foot is: %.2f feet",foot);

return 0;
}
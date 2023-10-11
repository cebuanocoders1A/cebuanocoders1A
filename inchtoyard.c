/*This program converts inch to yard
Written by: Joshua Miguel G. Jamisola
Date: 10/10/2023
*/
#include<stdio.h>
int main()
{
    //local Declarations
    float inches;
    float yard;

    yard = inches /36;

    printf("This converts inches to yard/n");
    printf("Input the inches ");
    scanf("%f",&yard);

    yard = yard /36;
    printf("The yard is %.2f yards",yard);

    return 0;

}
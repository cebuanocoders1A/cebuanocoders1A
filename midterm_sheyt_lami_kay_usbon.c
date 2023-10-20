#include<stdio.h>
int main()
{
    //local declarations
    int centigrade;
    float fahrenheit;
   
   //inputs
   printf("Enter a temperature in centigrade:");
   scanf("%d",&centigrade);

   //process
   fahrenheit =  (float) 32 + centigrade * (180.0 / 100.0);

   //output
   printf("The fahrenheit equvalent is %.2f\n", fahrenheit);
   
   return 0;



}

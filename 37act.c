/*this program is written by:Joshua Miguel G. Jamisola
Date:10/17/23
*/

#include<stdio.h>
int main()
{
    //local declarations
    int fib1;
    int fib2;
    int fib3;

    //process
    fib1 = 13 + 21;
    fib2 = fib1 + 21;
    fib3 = fib1 + fib2;

    printf("0, 1, 1, 2, 3, 5, 8, 13, 21,%d %d %d", fib1, fib2, fib3);
    
    return 0;
}
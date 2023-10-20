#include<stdio.h>

int main()
{
    short int number;
    short int first;
    short int second;
    short int third;
    short int fourth;
    short int last;


    printf("Enter value: ");
    scanf("%hd", &number);

    //process
    first = number / 10000;
    second = number / 1000 % 10;
    third = number / 100 % 10;
    fourth = number / 10 % 10;
    last = number % 10;

    //output statements
    printf("%hd\t%hd\t%hd\t%hd\t%hd\n",first, second, third, fourth, last);
    printf("%hd\t%hd\t%hd\t%hd\n", second, third, fourth, last);
    printf("%hd\t%hd\t%hd\t%hd\t%hd\n", third, fourth, last);
    printf("%hd\t%hd\n", fourth, last);
    printf("%hd\n", last);

    return 0;
}

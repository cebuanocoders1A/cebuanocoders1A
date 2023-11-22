/*This performance task is created by: Joshua Miguel G. Jamisola
BSCS 1 A 
11/22/2023
*/

#include<stdio.h>

//User-defined function declarations
    int readScores();
    void getGrades(int average);
    void displayResults(int average);

int main()
{
 //local declarations
    int average;

    average = readScores(),getGrades(average),displayResults(average);

    return 0;
}

int readScores()
{
//local declarations
    int firstScore, secondScore, thirdScore;

//input statements in getting the test scores
printf("Enter test score/s: ");
scanf("%d %d %d",&firstScore, &secondScore, &thirdScore);

// process of caluculating the data given
return(firstScore + secondScore + thirdScore) /3;
}

void getGrades(int average)
{
// using the if-else statement to determine the grade
    if (average >= 70)
    {
        printf("A\n");
    }

    else if (average >= 50)
    {
        printf("B\n");
    }

    else if (average >= 30)
    {
        printf("C\n");

    }

    else 
    printf("F\n");
    
}

void displayResults(int average)
{
 //displaying results
    printf("Your total average is: %d\n", average);
}

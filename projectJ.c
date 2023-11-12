/* This project is written by Joshua Miguel G. Jamisola 
1st year computer science BSCS 1A 
Date: 11/12/2023
This code makes a customer invoice by utilizing functions that the user has defined.*/


#include<stdio.h>

//Constants
#define LABOR_COST 0.35
#define TAX_RATE 0.085

//function declarations
float overallArea(float num1, float num2);
float carpetValue(float area, float carpetPricePSF);
float laborExpenses(float area);
float totalCost(float carpet, float labor);
float discountValue(float totalCost, float inputDiscount);
float subtotalPrice(float subtotalPrice, float discount);
float taxValue(float subtotalPrice);
float overallExpense(float subtotalPrice, float tax);

int main()
{
    //local declarations
    float width, carpet, area, length, discount, labor, partialPrice, subtotal, tax, priceTotal,inputDiscount, carpetPricePSF, total;

    //input statements
    printf("Enter the length of the carpet: ");
    scanf("%f", &length);
    printf("Enter the width of the carpet: ");
    scanf("%f", &width);
    printf("Enter the discount for the costumer: ");
    scanf("%f",  &discount);
    printf("Enter the carpetPrice(PSF): ");
    scanf("%f",&carpetPricePSF);

    //Process of calculating the values function declarations
    area = overallArea(length, width);
    carpet = carpetValue(area, carpetPricePSF);
    labor = laborExpenses(area);
    priceTotal = totalCost(carpet, labor);
    discount = discountValue(total, inputDiscount);
    subtotal = subtotalPrice(total, discount);
    tax = taxValue(subtotal);
    total = overallExpense(subtotal, tax);

    //showing output
     printf("\t\t\tMEASUREMENT\n\n");
    printf("Length\t\t\t\t\t%.2lf ft\n", length);
    printf("Width\t\t\t\t\t%.2lf ft\n", width);
    printf("Area\t\t\t\t\t%.2lf square ft\n", area);
    printf("\n\t\t\tCHARGES\n\n");
    printf("DESCRIPTION\t\tCOST/SQ.FT.\tCHARGE\n");
    printf("-----------\t\t-----------\t-----------\n");
    printf("Carpet\t\t\t%.2lf\t\t$%.2lf\n", carpetPricePSF, carpet);
    printf("Labor\t\t\t%.2lf\t\t%.2lf\n", LABOR_COST, labor);
    printf("\t\t\t\t\t----------\n");
    printf("INSTALLED PRICE\t\t\t\t$%.2lf\n", priceTotal);
    printf("Discount\t\t%.2lf%%\t%.2lf\n", inputDiscount * 100, discount);
    printf("\t\t\t\t\t----------\n");
    printf("SUBTOTAL\t\t\t\t$%.2lf\n", subtotal);
    printf("Tax\t\t\t\t\t%.2lf\n", tax);
    printf("TOTAL\t\t\t\t\t$%.2lf\n", total);

    return 0;
}

    //function definitions
    float overallPrice(float subTotal, float tax)
{
    return subTotal + tax;
}

    float taxValue(float subTotal)
{
    return subTotal * TAX_RATE;
}

    float subtotalPrice(float subTotal, float discount)
{
    return subTotal - discount;
}

    float discountValue(float overallPrice, float inputDiscount)
{
    return overallPrice * inputDiscount;
}

    float installedPrice(float carpet, float labor)
{
    return carpet + labor;
}

    float laborExpenses(float area)
{
    return area * LABOR_COST;
}

    float carpetValue(float area, float carpetPricePSF)
{
    return area * carpetPricePSF;
}

    float overallArea(float lenght, float width)
{
    return lenght * width;
}

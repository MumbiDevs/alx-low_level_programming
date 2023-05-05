#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * @brief Takes input from the user.
 * 
 * @return float The input value.
 */
float input()
{
    float number;

    printf("Enter number: ");
    scanf("%f", &number);

    return number;
}

/**
 * @brief Calculates the sum of two numbers.
 * 
 * @param num1 The first number.
 * @param num2 The second number.
 * @return float The sum of the two numbers.
 */
float addition(float num1, float num2)
{
    return num1 + num2;
}

/**
 * @brief Displays the result of the addition.
 * 
 * @param n1 The first number.
 * @param n2 The second number.
 * @param sum The sum of the two numbers.
 */
void display(float n1, float n2, float sum)
{
    printf("%.2f + %.2f = %.2f\n", n1, n2, sum);
}

int main()
{
    float number1, number2, result;

    // take input from the user
    number1 = input();
    number2 = input();

    // calculate the addition of the two numbers
    result = addition(number1, number2);

    // display the result
    display(number1, number2, result);

    return 0;
}

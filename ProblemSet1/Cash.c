#include <csbootcamp.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate number of quarters 
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate number of dimes
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate number of nickels
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate number of pennies
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Add all coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TO BE CODDED
    return 0;
}

int calculate_quarters(int cents)
{
    // TO BE CODDED
    return 0;
}

int calculate_dimes(int cents)
{
    // TO BE CODDED
    return 0;
}

int calculate_nickels(int cents)
{
    // TO BE CODDED
    return 0;
}

int calculate_pennies(int cents)
{
    // TO BE CODDED
    return 0;

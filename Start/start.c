#define _CRT_SECURE_NO_WARNINGS
// #define _CRT_SECURE_NO_WARNINGS is used here to make the program run as scanf is not a safe function
#include <stdio.h> // Standard IO
// Program to Determine How to Pay That Amount Using the Smallest number of $100, $50, $20, $10, $5, and $1 bills.
int main(void){ // Main Function
    int hundreds, fifties, twenties, tens, fives, ones, amount; // Variables
    printf("Enter How much Money You have in USD: "); // First Statement Before Scanf
    scanf("%d", &amount); // %d is Integer's Format Specifier. & is Used before variable in scanf
    hundreds = amount / 100; // Divide by 100 to get the number of $100 Bill(s)
    amount %= 100; // Updates the Amount to the remainder after subtracting the value of $100 bill(s)
// Same Process in the Other Ones: 
    fifties = amount / 50;
    amount %= 50;

    twenties = amount / 20;
    amount %= 20;

    tens = amount / 10;
    amount %= 10;

    fives = amount / 5;
    amount %= 5;

    ones = amount; // The last remainder would be ones so no need to divide by 1.
// Then Printed the values of each bill.
    printf("You Have Exactly :\n%d $100 bill(s)\n%d $50 bill(s)\n%d $20 bill(s)\n%d $10 bill(s)\n%d $5 bill(s)\n%d $1 bill(s)\n", hundreds, fifties, twenties, tens, fives, ones);
    return 0;
}
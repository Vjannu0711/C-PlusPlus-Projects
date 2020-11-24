// INSTRUCTIONS:
// Income tax calculator.
// Write a C++ program that (1) asks for a positive integer income from the user. 
// Assuming the user always enters a valid integer, the program should verify that income is greater than 0 and 
// if not, ask for another, checks again, until a correct input was entered. 
// (2) calculates the income tax (including the fraction) based on the following table and displays the result on the screen.

// TAX RATE				TAXABLE INCOME BRACKET
// 10%					$0 to $20,000
// 15%					$20,001 to $70,000
// 25%					$70,001 or more

// For example, for income = $100,000, the first $20,000 should be taxed at 10%,
// then $50, 000 should be taxed at 15 %, and the last $30, 000 should be taxed at 25 % .

#include <iostream>
#include <string>

using namespace std;
int main() {
    int income;
    cout << "Please enter your income." << endl;
    cin >> income;
    double exactIncome = int(income);
    double incomeTax;
    while (income <= 0) {
        cout << "The income you have entered is invalid. Please enter your income again." << endl;
        cin >> income;
    }
    if (income <= 20000) {
        exactIncome *= 0.10;
        cout << "Your income tax is: $" << exactIncome << endl;
    }
    else if ((income >= 20001) && (income <= 70000)) {
        incomeTax = 20000 * 0.10;
        income -= 20000;
        incomeTax = incomeTax + (income * 0.15);
        cout << "Your income tax is: $" << incomeTax << endl;
    }
    else if (income >= 70001) {
        incomeTax = 20000 * 0.10; // set the first tax cut
        income -= 20000;
        incomeTax += 50000 * 0.15; // add the second tax cut
        income -= 50000;
        incomeTax = incomeTax + (income * 0.25); // multiply the rest by the last tax cut
        cout << "Your income tax is: $" << incomeTax << endl;
    }
    return 0;
}
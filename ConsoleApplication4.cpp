// Interactive IO and Mathematical Expressions.cpp : This is the Interest Earned branch
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double principal, rate1, rate2, compound, interest, amount, finalAmount;

    cout << "What is your principal (Amount in savings)? ";
    cin >> principal;
    cout << "What is your interest rate? ";
    cin >> rate1;
    cout << "How many times has the interest compounded? ";
    cin >> compound;

    rate2 = rate1 / 100;
    interest = rate2 * principal;
    amount = (1 + rate2 / compound);
    finalAmount = principal * pow(amount, compound);

    cout << "\nInterest rate: " << rate1 << "%\nTimes compounded: " << compound << "\nPrincipal: $" << principal << "\nInterest: $" << interest << "\nAmount in savings: $" << finalAmount << "\n";
}

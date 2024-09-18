// Interactive IO and Mathematical Expressions.cpp : This is the Interest Earned branch
//

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    double principal, rate, compound, interest, amount, rateCompound, finalAmount;

    cout << "What is your principal (Amount in savings)? ";
    cin >> principal;
    cout << "What is your interest rate? ";
    cin >> rate;
    cout << "How many times has the interest compounded? \n";
    cin >> compound;

    interest = rate * principal;
    rateCompound = rate / compound;
    amount = (1 + rate / compound);
    finalAmount = principal * pow(amount, compound);

    cout << "Interest rate: " << rate << "\nTimes compounded: " << compound << "\nPrincipal: $" << principal << "\nInterest: $" << interest << "\nAmount in savings: $" << finalAmount << "\n";
}

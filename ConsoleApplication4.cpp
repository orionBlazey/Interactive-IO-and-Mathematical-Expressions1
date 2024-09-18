// Interactive IO and Mathematical Expressions.cpp : This is the Ingredient Adjuster branch
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double conversion = 0.021;
    const double sugar = 1.5;
    const double butter = 1;
    const double flour = 2.75;
    double totSugar, totButter, totFlour, cookies, ingAmount;

    cout << "How many cookies would you like to bake?: ";
    cin >> cookies;

    ingAmount = cookies * conversion;
    totSugar = ingAmount * sugar;
    totButter = ingAmount * butter;
    totFlour = ingAmount * flour;

    cout << "To bake " << cookies << " cookies, you need:\n";
    cout << fixed << setprecision(2) << showpoint;
    cout << totSugar << " cups of sugar\n" << totButter << " cups of butter\n" << totFlour << " cups of flour\n" << endl;
}

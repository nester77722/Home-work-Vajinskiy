#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    setlocale(0, "");

    Rational firstRational(3, 5);

    Rational secondRational(2, 7);

    cout << "First Rational = ";

    firstRational.Show();


    cout << "Second Rational = ";

    secondRational.Show();

    Rational result = firstRational * secondRational;

    cout << "First Rational * Second Rational = ";

    result.Show();

    return 0;
}
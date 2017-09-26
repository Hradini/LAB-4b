#include <iostream>
using namespace std;

int Power(int base, int powerRaised){
    if (powerRaised != 0)
        return (base*Power(base, powerRaised-1));
    else
        return 1;
}

int main()
{
    int base, powerRaised, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power number(positive integer): ";
    cin >> powerRaised;

    result = Power(base, powerRaised);
    cout << base << "^" << powerRaised << " = " << result;

    return 0;
}


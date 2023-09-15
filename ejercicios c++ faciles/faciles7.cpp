#include <iostream>
#include <cmath>

using namespace std;

double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    double number = 2;
    double power = 3;
    double result = power(number, power);
    cout << number << " elevado a la " << power << " es igual a " << result << endl;
    return 0;
}

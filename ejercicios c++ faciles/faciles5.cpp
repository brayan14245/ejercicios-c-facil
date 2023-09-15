#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n);

int main() {
    int n;
    cout << "Ingrese un número: ";
    cin >> n;

    unsigned int result = factorial(n);
    cout << "El factorial de " << n << " es " << result << endl;

    return 0;
}

unsigned int factorial(unsigned int n)
{
    unsigned int result = 1;
    for (unsigned int i = 1; i <= n; ++i)
    {
        result *= i;
    }
    return result;
}
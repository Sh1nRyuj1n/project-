#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum, dif, prod, quo;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    dif = num1 - num2;
    prod = num1 * num2;
    quo = num1 / num2;

    cout << "SUM: " << sum << endl;
    cout << "Difference: " << dif << endl;
    cout << "PRODUCIT: " << prod << endl;
    cout << "QUOTIENT: " << quo << endl;
    return 0;
}

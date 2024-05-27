#include <iostream>
using namespace std;
double num1, num2, num3, num4, num5, ave;
int main() {
    cout << "enter numbers to compute the average: ";
    cin >> num1;
    cin >> num2;
    cin >> num3; 
    cin >> num4; 
    cin >> num5;
    ave = (num1 + num2 + num3 + num4 + num5) / 5;
    cout << "your average is: " << ave;
    return 0;
}

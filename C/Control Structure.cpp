#include <iostream>
using namespace std;

int main() {
    char order;
    bool input = false;
    cout << "a. Cheeseburger            75.95"<<endl;
    cout << "b. Chicken Joy             167.89" << endl;
    cout << "c. JollyhotDog             56.00" << endl;
    cout << "d. Ice Tea (Large)         45.00" << endl;
    cout << "e. Soda                    35.00" << endl;
    cout << "Enter 'o' to quit" << endl;
    cout << "Choose your order: ";
    do {
        cin >> order;
        switch (order) {
        case 'a':
            cout << "You ordered Chesseburger";
            input = true;
            break;
        case 'b':
            cout << "You ordered Chicken Joy ";
            input = true;
            break;
        case 'c':
            cout << "You ordered JollyhotDog";
            input = true;
            break;
        case 'd':
            cout << "You ordered Ice Tea (Large) ";
            input = true;

            break;
        case 'e':
            cout << "You ordered Soda";
            input = true;
            break;
        case 'o':
            input = true;
            break;
        default:
            cout << "your order is not on the list, try again: ";
            input = false;
        }
    } while (!input);
    cout << "\n";
    return 0;
}

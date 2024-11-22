#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    cout << "Binary representation: ";
    while (decimal > 0) {
        cout << decimal % 2;
        decimal /= 2;
    }
    cout << endl;

    return 0;
}
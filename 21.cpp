#include <iostream>
using namespace std;

int gcd(int a, int b) {
    do {
        int temp = b;
        b = a % b;
        a = temp;
    } while (b != 0);
    return a;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD: " << gcd(a, b) << endl;
    return 0;
}


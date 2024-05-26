#include <iostream>
using namespace std;

double pow(double x, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n > 0) {
        return x * pow(x, n - 1);
    }
    else {
        return 1 / pow(x, -n);
    }
}

// Тестування
int main() {
    cout.precision(5);
    cout << fixed;

    cout << "pow(2.00000, 10) = " << pow(2.00000, 10) << endl; // Виведе 1024.00000
    cout << "pow(2.10000, 3) = " << pow(2.10000, 3) << endl;   // Виведе 9.26100
    cout << "pow(2.00000, -2) = " << pow(2.00000, -2) << endl; // Виведе 0.25000

    return 0;
}

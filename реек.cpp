#include <iostream>
using namespace std;

double powTailRec(double x, int n, double acc = 1) {
    if (n == 0) {
        return acc;
    }
    else if (n > 0) {
        return powTailRec(x, n - 1, acc * x);
    }
    else {
        return powTailRec(x, n + 1, acc / x);
    }
}

// Тестування
int main() {
    cout.precision(5);
    cout << fixed;

    cout << "powTailRec(2.00000, 10) = " << powTailRec(2.00000, 10) << endl; // Виведе 1024.00000
    cout << "powTailRec(2.10000, 3) = " << powTailRec(2.10000, 3) << endl;   // Виведе 9.26100
    cout << "powTailRec(2.00000, -2) = " << powTailRec(2.00000, -2) << endl; // Виведе 0.25000

    return 0;
}

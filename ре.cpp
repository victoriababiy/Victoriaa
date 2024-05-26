#include <iostream>
using namespace std;

int fibonacciTailRec(int n, int a = 0, int b = 1) {
    if (n == 0) {
        return a;
    }
    else if (n == 1) {
        return b;
    }
    else {
        return fibonacciTailRec(n - 1, b, a + b);
    }
}

// Тестування
int main() {
    int n = 4;
    cout << "F(" << n << ") = " << fibonacciTailRec(n) << endl; // Виведе 3
    return 0;
}

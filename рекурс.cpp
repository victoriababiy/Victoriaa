#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Тестування
int main() {
    int n = 4;
    cout << "F(" << n << ") = " << fibonacci(n) << endl; // Виведе 3
    return 0;
}

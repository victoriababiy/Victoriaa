#include <iostream>
using namespace std;

int climbStairsTailRec(int n, int a = 1, int b = 1) {
    if (n <= 1) {
        return b;
    }
    else {
        return climbStairsTailRec(n - 1, b, a + b);
    }
}

// Тестування
int main() {
    int n = 3;
    cout << "Number of ways to climb " << n << " steps: " << climbStairsTailRec(n) << endl; // Виведе 3
    return 0;
}

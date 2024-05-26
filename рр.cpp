#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
}

// ����������
int main() {
    int n = 3;
    cout << "Number of ways to climb " << n << " steps: " << climbStairs(n) << endl; // ������ 3
    return 0;
}

#include <iostream>
using namespace std;

void reverseStringTail(string str, int index = 0) {
    if (index == str.length())
        return;
    else {
        reverseStringTail(str, index + 1);
        cout << str[index];
    }
}

// ����������
int main() {
    reverseStringTail("tiger"); // ������ "regit"
    return 0;
}

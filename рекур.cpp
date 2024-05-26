#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* swapPairsTailRec(ListNode* head, ListNode* prev = NULL) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode* first = head;
    ListNode* second = head->next;

    first->next = swapPairsTailRec(second->next, first);
    second->next = first;

    if (prev != NULL) {
        prev->next = second;
    }

    return second;
}

// Допоміжна функція для виведення списку
void printList(ListNode* node) {
    while (node != NULL) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

// Тестування
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original list: ";
    printList(head);

    head = swapPairsTailRec(head);

    cout << "Swapped list: ";
    printList(head);

    return 0;
}

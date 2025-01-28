#include <iostream>
using namespace std;

// Definition for singly-linked list node
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to reverse the linked list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) {
            cout << "Reached the end of the list. Returning nullptr.\n";
            return nullptr;
        }

        cout << "Currently at node: " << head->val << endl;

        ListNode* newHead = head;
        if (head->next) {
            cout << "Calling reverseList for next node: " << head->next->val << endl;
            newHead = reverseList(head->next);
            cout << "Back at node: " << head->val << ". Reversing link.\n";
            head->next->next = head;
        }

        cout << "Setting next of node " << head->val << " to nullptr.\n";
        head->next = nullptr;

        return newHead;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "nullptr\n";
}

// Main function
int main() {
    // Create a simple linked list: 1 -> 2 -> 3 -> 4 -> nullptr
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);

    cout << "Original List:\n";
    printList(head);

    // Reverse the list using Solution class
    Solution solution;
    cout << "\nReversing the list...\n";
    ListNode* newHead = solution.reverseList(head);

    cout << "\nReversed List:\n";
    printList(newHead);

    // Cleanup memory
    ListNode* current = newHead;
    while (current) {
        ListNode* nextNode = current->next;
        delete current;
        current = nextNode;
    }

    return 0;
}

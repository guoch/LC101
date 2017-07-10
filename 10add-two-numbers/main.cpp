#include <iostream>


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        int sum = 0;
        ListNode *head = NULL;
        ListNode *tail = NULL;

        while (l1 != NULL || l2 != NULL) {
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l1 = l2->next;
            }
            ListNode *newnode = new ListNode(sum % 10);
            sum = sum / 10;
            if (head == NULL) {
                head = newnode;
                tail=head;
            } else {
                tail->next = newnode;
                tail = newnode;
            }

        }
        if (sum > 0) {
            tail->next = new ListNode(sum);
        }
        return head;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
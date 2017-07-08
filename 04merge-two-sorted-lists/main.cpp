#include <iostream>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL)
			return l2;
		if (l2 == NULL)
			return l1;
		ListNode *newtail = NULL;
		ListNode *head = NULL;
		ListNode *cur1 = l1, *cur2 = l2;
		while (cur1 != NULL || cur2 != NULL) {
			if ((cur1 != NULL && cur2 != NULL && cur1->val <= cur2->val) || (cur1 != NULL && cur2 == NULL)) {
				if (newtail == NULL) {
					newtail = cur1;
					head = newtail;
				}
				else {
					newtail->next = cur1;
					newtail = cur1;
				}
				cur1 = cur1->next;
			}
			else if ((cur1 != NULL && cur2 != NULL && cur1->val > cur2->val) || (cur1 == NULL && cur2 != NULL)) {
				if (newtail == NULL) {
					newtail = cur2;
					head = newtail;
				}
				else {
					newtail->next = cur2;
					newtail = cur2;
				}
				cur2 = cur2->next;
			}
		}
		return head;
		//  need to insert after tail ,store the head
	}
};

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
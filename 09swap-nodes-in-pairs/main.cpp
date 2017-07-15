#include <iostream>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

//Given 1->2->3->4, you should return the list as 2->1->4->3.

class Solution {
public:
	ListNode *swapPairs(ListNode *head) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
//        if(head==NULL|| head->next==NULL)
//            return head;
        ListNode *cur=head;
        ListNode *precur=dummy;

        while(cur!=NULL && cur->next!=NULL) {
            ListNode *q = cur->next;
            ListNode *r = cur->next->next;
            precur->next = q;
            q->next = cur;
            cur->next = r;
            precur = cur;
            cur = r;
        }
        return dummy->next;

    }
};

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
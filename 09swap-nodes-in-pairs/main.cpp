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
        if(head==NULL|| head->next==NULL)
            return head;
        ListNode *cur=head;
        ListNode *precur=head;
        ListNode *tmp=NULL;
        ListNode *newhead=NULL;

        while(cur!=NULL && cur->next!=NULL){
            precur=cur;  //1
            cur=cur->next;  //2
            cur->next=precur;  //2->1
            precur->next=tmp; //2->1->tmp


            if(newhead==NULL)
                newhead=cur;
            else{
                tmp=cur;
            }
            cur=cur->next;
//             1 2 3     2 1
//            ListNode *next=cur->next->next;   //3
//            cur->next=precur;

        }
        return newhead;

    }
};

int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
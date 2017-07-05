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
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode *newtail=NULL;
        ListNode *cur1=l1,*cur2=l2;
        while(cur1!=NULL && cur2!=NULL ) {

            if (cur1->val <= cur2->val) {
                if (newtail == NULL)
                    newtail = cur1;
                else {
                    newtail->next = cur1;
                    newtail = cur1;
                }
                cur1 = cur1->next;
            }
            else{
                if(newtail==NULL)
                    newtail=cur2;
                else{
                    newtail->next=cur2;
                    newtail=cur2;
                }
                cur1=cur2->next;
            }
        }
// how to store the head     need to insert after head

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>

using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *cur=head;
        ListNode *precur=head;

        ListNode *newhead=NULL;
        while(cur!=NULL){
            precur=cur;
            if(cur->next!=NULL)
                cur=cur->next;
//            current=cur;
//            current=cur;
//            current->next=precur;

            if(newhead==NULL){
                newhead=precur;
            }else{
                precur->next=newhead;
                newhead=precur;
            }
        }
        return newhead;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
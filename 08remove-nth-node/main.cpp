#include <iostream>
#include <stack>
  struct ListNode {
      int val;
    ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
      };


//1->2->3->4->5, and n = 2
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)
            return NULL;
        int count=0;
        ListNode *cur=head;
        while(cur!=NULL){
            cur=cur->next;
            count++;
        }
        ListNode *newhead=head;
        if(n==count){
            newhead=head->next;
        }else{
            ListNode *cur2=newhead;
            for(int k=0;k<count-n-1;k++)
                cur2=cur2->next;
            cur2->next=cur2->next->next;
        }
        return newhead;


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
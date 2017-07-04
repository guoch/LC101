#include <iostream>
using namespace std;
struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return false;
        ListNode *slow=head;
        ListNode *fast=head;
        while(slow->next!=NULL){
            slow=slow->next;
        }



    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
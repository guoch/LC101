#include <iostream>
#include <vector>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

//logn
class Solution {
public:
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        return binarymerge(lists, 0, lists.size() - 1);
    }

    ListNode *binarymerge(vector<ListNode *> &lists, int left, int right) {
        if (left == right)
            return lists[left];
        if (left < right) {
            int mid = left + (right - left) / 2;
            ListNode *p = binarymerge(lists, left, mid);
            ListNode *q = binarymerge(lists, mid + 1, right);
            return merge(p, q);
        } else {
            return NULL;
        }

    }

    ListNode *merge(ListNode *p, ListNode *q) {
        if (p == NULL) return q;
        if (q == NULL) return p;
        if (p->val < q->val) {
            p->next = merge(p->next, q);
            return p;
        } else {
            q->next = merge(p, q->next);
            return q;
        }
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
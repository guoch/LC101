#include <iostream>
#include <vector>
#include <stack>
using namespace std;

/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 * [[1,1],2,[1,1]]   [1,1,2,1,1]
 */
class NestedIterator {
public:

	stack<NestedInteger> mystack;

	NestedIterator(vector<NestedInteger> &nestedList) {
		for(int i=0;i<nestedList.size();i++){
			mystack.push(nestedList[i]);

		}



	}

	int next() {
		int nestresult=mystack.top().getInteger();
		mystack.pop();



	}

	bool hasNext() {

	}
};


//this can only be test in leetcode   https://leetcode.com/problems/flatten-nested-list-iterator/#/description

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */


int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
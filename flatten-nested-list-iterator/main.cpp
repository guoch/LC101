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

	stack<vector<NestedInteger>> mystack;

	NestedIterator(vector<NestedInteger> &nestedList) {
//		for(int i=0;i<nestedList.size();i++){
//			mystack.push(nestedList[i]);
//		}
		// tail first in stack then pop first
		for(int i=nestedList.size()-1;i>=0;i--)
			mystack.push(nestedList[i])

	}

	// next always return int !
	int next() {
		int nestcur=mystack.top().
		if (isInteger(nestcur)) 
			result=nestcur.getInteger();
		mystack.pop();
		return result;
	}

	bool hasNext() {
		while (!mystack.empty()) {
			vector<NestedInteger> element= mystack.pop();
			mystack.pop();
			for (int i = element.size(); i >= 0; i--) {
				mystack.push(element[i].next());
			}
		}

		

	}
};


//this can only be test in leetcode   https://leetcode.com/problems/flatten-nested-list-iterator/

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */


int main() {
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
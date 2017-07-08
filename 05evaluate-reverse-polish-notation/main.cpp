#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> mystack;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int q = mystack.top();
                mystack.pop();
                int p = mystack.top();
                mystack.pop();
                mystack.push(p + q);
            } else if (tokens[i] == "-") {
                int q = mystack.top();
                mystack.pop();
                int p = mystack.top();
                mystack.pop();
                mystack.push(p - q);
            } else if (tokens[i] == "*") {
                int q = mystack.top();
                mystack.pop();
                int p = mystack.top();
                mystack.pop();
                mystack.push(p * q);
            } else if (tokens[i] == "/") {
                int q = mystack.top();
                mystack.pop();
                int p = mystack.top();
                mystack.pop();
                mystack.push(p / q);
            } else {
                mystack.push(atoi(tokens[i].c_str()));
            }
        }
        return mystack.top();

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
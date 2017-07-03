#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s==""){
            return true;
        }
        stack<char> check_stack;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                check_stack.push(s[i]);
            }
            else if(s[i]==')'){
                if(!check_stack.empty() && check_stack.top()=='('){
                    check_stack.pop();
                }
                else
                    return false;
            }
            else if(s[i]==']'){
                if(!check_stack.empty() && check_stack.top()=='['){
                    check_stack.pop();
                }
                else
                    return false;
            }
            else if(s[i]=='}') {
                if (!check_stack.empty() && check_stack.top()=='{') {
                    check_stack.pop();
                } else
                    return false;
            }

            if(check_stack.empty()){
                return true;
            }else{
                return false;
            }
        }

    }
};


int main() {
    Solution solve;
    string s="()";
    int result=solve.isValid(s);
    cout<<result<<endl;
    return 0;
}
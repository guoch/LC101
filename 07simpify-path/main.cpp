#include <iostream>
#include <string>
#include <sstream>
#include <stack>
using namespace std;


//For example,
//		path = "/home/", => "/home"
//path = "/a/./b/../../c/", => "/c"


class Solution {
public:
    string simplifyPath(string path) {
        stack<string> mystack;
        string segment;
        stringstream streampath(path); //split by /
        while(getline(streampath,segment,'/')){
            if(segment=="." || segment=="")
                continue;
            if(!mystack.empty() && segment==".."){
                mystack.pop();
            }else if(segment!=".."){
                mystack.push(segment);
            }
        }
        stack<string> reversestack;
        while(!mystack.empty()){
            reversestack.push(mystack.top());
            mystack.pop();
        }
        string result="/";
        while(!reversestack.empty()){
            result+=reversestack.top();
            reversestack.pop();
            result+="/";
        };
        if(result=="/")
            return result;
        return result.substr(0,result.size()-1);
    }
};



int main() {
    std::cout << "Hello, World!" << std::endl;
    Solution solve1;
    string path = "/a/./b/../../c/";
    string newpath=solve1.simplifyPath(path);
    cout<<newpath<<endl;
    return 0;
}
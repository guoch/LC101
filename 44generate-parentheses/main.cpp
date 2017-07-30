#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        if (n <= 0) return {};
        vector<string> result;
        Parenthesis(n, n, result, "");
        return result;

    }

    void Parenthesis(int left, int right, vector<string> &result, string tmp) {
        //how many remaining ( )
        if (left == 0 && right == 0) {
            result.push_back(tmp);
            return;
        }
        if (left > 0)
            Parenthesis(left - 1, right, result, tmp + '(');  //tmp means the last generated add (
        if (right > 0) {
            if (left < right) {
                Parenthesis(left, right - 1, result, tmp + ')');
            }   //((( ))  left smaller . exsiting more
        }
//            Parenthesis(left,right-1,result,tmp+')');     //how to valid this is valid
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
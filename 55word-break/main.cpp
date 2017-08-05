#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> dp(s.size(),0);
        for(int i=0;i<s.size();i++){
            if(find(wordDict.begin(),wordDict.end(),s.substr(i,s.size()-i))){

            }


        }


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
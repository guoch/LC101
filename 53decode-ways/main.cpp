#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        if(n==0)
            return 0;
        vector<int> dp(n+1);
        dp[0]=1;
//        int p=1,q=1;  //climb
        for(int i=1;i<n;i++){
            if(s[i]=='0')
            if(s[i-1]=='1' || s[i-1]=='2' && s[i]<='6'){
                //may 2 numbers
            } else{

            }


        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        if(n==0 || n>1 && s[0]=='0')
            return 0;
        vector<int> dp(n+1,0);
        dp[0]=1;
//        int p=1,q=1;  //climb
        for(int i=1;i<=n;i++){
            dp[i]=(s[i-1]=='0')?0:dp[i-1];
            if(i>1 && s[i-2]=='1' || s[i-2]=='2' && s[i-1]<='6'){
                dp[i]+=dp[i-2];
                //may 2 numbers
            }

        }
        return dp[n];

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
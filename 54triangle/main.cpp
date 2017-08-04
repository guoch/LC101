#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        if(n==0)
            return 0;
        vector<int> dp=triangle[n-1];
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                dp[j]=min(dp[j],dp[j+1])+triangle[i][j]; //because j+1 are more bottomer
            }
        }
        return dp[0];

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
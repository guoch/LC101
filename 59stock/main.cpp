#include <iostream>
#include <vector>
using namespace std;

//first buy first sell second buy second sell  or only once 4.2 3.8 4.6 7.8 7.3 9.8

//https://discuss.leetcode.com/topic/574/any-solutions-better-than-o-n-2/19
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int n=prices.size();
        vector<int> profits(n);
        int min1=prices[0];
        for(int i=1;i<n;i++){
            int profit=prices[i]-min1;
            profits[i]=max(profits[i-1],profit);
            min1=min(min1,prices[i]);
        }

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
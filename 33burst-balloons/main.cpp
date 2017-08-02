#include <iostream>
#include <vector>

using namespace std;

//也就是k点被踩破之前，N1和N2重点的气球都不会相互影响。于是我们就成功构造了子问题。因此分治加dp就可以对问题进行求解了。
//写一下状态传递方程：
//dp[left][right] = max{dp[left][right] , nums[left] * nums[i] * nums[right]  +dp[left][i] +dp[i][right]


// 11 1,2,3,4,5,6,7 18          mid=4  [1,2,3] kill   [5,6,7] kill   remain 4*  nums[left-1]  *nums[right] + nums[]

class Solution {
public:
    int maxCoins(vector<int> &nums) {
        vector<int> arr(nums.size() + 2);
        for (int i = 1; i <= nums.size(); i++)
            arr[i] = nums[i - 1];
        arr[0] = 1;
        arr[nums.size() + 1] = 1;
        vector<vector<int>> dp(nums.size() + 2, vector<int>(nums.size() + 2));

        for (int k = 2; k < nums.size() + 2; k++) {
            for (int left = 0; left < nums.size() + 2 - k; left++) {
                int right = left + k;
                for (int i = left + 1; i < right; i++) {
                    dp[left][right] = max(dp[left][right],
                                          arr[left] * arr[i] * arr[right] + dp[left][i] + dp[i][right]);
                }
            }
        }
        return dp[0][nums.size() + 2 - 1];


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
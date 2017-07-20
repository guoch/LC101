#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> subs(1, vector<int>());
        for (int i = 0; i < nums.size(); i++) {
            int size = subs.size(); // must use tmp size or will calculate size() every time
            for (int j = 0; j < size; j++) {
                subs.push_back(subs[j]);
                subs.back().push_back(nums[i]);
            }
        }
        return subs;
    }
};

int main() {
    Solution solve1;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res;
    res = solve1.subsets(nums);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
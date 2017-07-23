#include <iostream>
#include <vector>
using namespace std;

//https://leetcode.com/problems/find-peak-element/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int len=nums.size();
        if(len<=1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        for(int i=1;i<len-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                return i;
            }
            i++;
        }
        if(nums[len-1]>nums[len-2])
            return len-1;
    }
};


int main() {
    vector<int> nums={1,2,3,1};
    Solution solve1;
    int res=solve1.findPeakElement(nums);
    std::cout << res<< std::endl;
    return 0;
}
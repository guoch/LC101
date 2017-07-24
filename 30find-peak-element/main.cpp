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
        }
        if(nums[len-1]>nums[len-2])
            return len-1;
    }

//
//    int findPeakElement(const vector<int> &num) {
//        if (num.size() <= 1) return 0;
//        int mid = 0, l = 0, h = num.size() - 1;
//
//        while (l < h) {
//            mid = (l + h) / 2;
//            if (num[mid] > num[mid + 1])
//                h = mid;
//            else if (num[mid] < num[mid + 1])
//                l = mid + 1;
//        }
//
//        return l;
//    }
};


int main() {
    vector<int> nums={1,2,3,1};
    Solution solve1;
    int res=solve1.findPeakElement(nums);
    std::cout << res<< std::endl;
    return 0;
}
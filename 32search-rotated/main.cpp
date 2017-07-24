#include <iostream>
#include <vector>

using namespace std;

//4 5 6 7 0 1 2  return index

//https://leetcode.com/problems/search-in-rotated-sorted-array/
//search-in-rotated-sorted-array
class Solution {
public:
    int search(vector<int> &nums, int target) {
        if (nums.empty()) {
            return -1;
        }
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {   // && nums[left]>=nums[right]
            int mid = (left + right) / 2;
            if (nums[mid] == target) return mid;

            if (nums[left] <= nums[mid]) {
                if (target >= nums[left] && target < nums[mid]) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            } else {
                if (target > nums[mid] && target <= nums[right]) {
                    left = mid + 1;
                } else {
                    right = mid - 1;
                }
            }
        }
        return nums[left] == target ? left : -1;
    }
};

int main() {
    std::cout << "Helleft, World!" << std::endl;
    return 0;
}
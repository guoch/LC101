#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
//    int findKthLargest(vector<int>& nums, int k) {
//        int left = 0, right = nums.size() - 1;
//        while (true) {
//            int pos = partition(nums, left, right);
//            if (pos == k - 1) return nums[pos];
//            if (pos > k - 1) right = pos - 1;
//            else left = pos + 1;
//        }
//    }
    int findKthLargest(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end(), compare);
        return nums[k - 1];
    }

    static bool compare(int a, int b) {
        return a > b;

    }

    int partition(vector<int> &nums, int left, int right) {
        int pivot = nums[(left + right) / 2];
        while (left < right) {
            while (nums[left] < pivot) left++;
            while (nums[right] > pivot) right--;
            if (left < right) {
                int tmp = nums[right];
                nums[right] = nums[left];
                nums[left] = tmp;
                left++;
                right--;
            }
        }
        return left;
    }
};
//buggy

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3) return 0;
        vector<int> left(n, 0);
        vector<int> right(n, 0);
        int water = 0;
        for (int i = 1; i < n; i++) {
            left[i] = max(left[i - 1], height[i - 1]);  //1 1 2 2 2 2 3 3 3 3 3 
        }

        for (int i = n - 2; i >= 0; i--) {
            right[i] = max(right[i + 1], height[i + 1]);
            int minheight = min(left[i], right[i]);
            if (minheight > height[i]) water += minheight - height[i];
        }
        return water;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
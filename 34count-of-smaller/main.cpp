#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]<nums[i])
                    count++;
            }
            result.push_back(count);
        }
        return result;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
//    int mymax(int a,int b,int c){
//        return max(max(a,b),c);
//    }
    int maxProduct(vector<int>& nums) {
        int *p=new int[nums.size()]; //indicate max array end with k   must end with
        int *q=new int[nums.size()]; //indicate min array end with k
        p[0]=nums[0];
        q[0]=nums[0];

        int max_num=p[0];
        for(int i=1;i<nums.size();i++){
            p[i] = max( max(p[i-1] * nums[i],q[i-1] * nums[i]), nums[i]);
            q[i] = min( min(q[i-1]*nums[i],p[i-1]*nums[i]), nums[i]);
            max_num=max(max_num,p[i]);
        }
        return max_num;
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
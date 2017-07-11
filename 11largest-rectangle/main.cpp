#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int> &heights) {
        stack<int> mystack;

        int maxarea=0;
        heights.push_back(0); //dummy

        for(int i=1;i<heights.size();i++){
            while(!mystack.empty() && heights[i]<=heights[mystack.top()]){
                int h=heights[mystack.top()];
                mystack.pop();

                int idx;
                if(mystack.empty()){
                    idx=-1;
                }else{
                    idx=mystack.top();
                }
                maxarea=max(maxarea, h*(i-idx-1));
            }
            mystack.push(i);
        }
        return maxarea;

    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> heights={2,1,5,6,2,3};
    Solution solve1;
    int res=solve1.largestRectangleArea(heights);
    cout<<res<<endl;
    return 0;
}
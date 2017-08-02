#include <iostream>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        int *p=new int[n+1];
        p[1]=1,p[2]=2;
        for(int i=3;i<=n;i++){
            p[i]=p[i-1]+p[i-2];
        }
        return p[n];
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
//https://leetcode.com/problems/combinations/

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> v;
        dfs(1, n, k, v, result);
        return result;
    }

    void dfs(int begin,int end,int k,vector<int> &v,vector<vector<int>> result){
        if(k!=0){
            for(int i=begin;i<=end;i++){
                v.push_back(i);
                dfs(i+1,end,k-1,v,result);
                v.pop_back();    // 1,2   1,3
            }
        }else{
            result.push_back(v);
        }
    }
        //dfs way 1   2,3,4
        //         2   3,4
        //         3    4
        //           4

};

int main() {
    int n=4,k=2;
    Solution solve;
    vector<vector<int>> res=solve.combine(n,k);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
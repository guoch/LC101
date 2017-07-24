#include <iostream>
#include <vector>
using namespace std;
//https://leetcode.com/problems/combinations/

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        vector<int> S;
        vector<int> v;
        int i;
        for(i=1;i<=n;i++){
            S.push_back(i); //initial
        }
//        combine(S,v,0,S.size()-k,k-1);


    }

//    void combine(vector<int> &S,vector<int> &v,int i,int n,int index){
//        int j;
//        for(j=i;j<n && j<S.size();j++){
//
//        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        if (s1.length() + s2.length() != s3.length())
            return false;
        helper(s1,0,s2,0,s3,0);
    }

    bool helper(string s1, int p1, string s2, int p2, string s3, int p3) {
        if (p3 == s3.length()) return true;
        if (p1 == s1.length()) return s2.substr(p2) == s3.substr(p3)?true:false;
        if (p2 == s2.length()) return s1.substr(p1) == s3.substr(p3)?true:false;
        if (s1[p1] == s3[p3] && s2[p2] == s3[p3])
            return (helper(s1, p1 + 1, s2, p2, s3, p3 + 1) || helper(s1, p1, s2, p2+1, s3, p3 + 1));
        else if (s1[p1] == s3[p3])
            return helper(s1, p1 + 1, s2, p2, s3, p3 + 1);
        else if (s2[p2] == s3[p3])
            return helper(s1, p1, s2, p2+1, s3, p3 + 1);
        else
            return false;
    }
};

int main() {
    string s1="";
    string s2="";
    string s3="";
    Solution solve1;
    bool st=solve1.isInterleave(s1,s2,s3);

    std::cout << "Hello, World!" <<st<< std::endl;
    return 0;
}
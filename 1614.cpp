// problem link: https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/

class Solution {
public:
    int maxDepth(string s) {
        int arr=0;
        int maxx=0;
        for(auto i:s){
            if(i=='(') arr++;
            else if(i==')') arr--;
            maxx=max(maxx,arr);
        }
        return maxx;
    }
};
// problem link: https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int index=0;
        for(int i=0;i<s.length();i++){
            if(index==0 && s[i]=='0') index=i;
            if(index && s[i]=='1') return false;
        }
        return true;
    }
};
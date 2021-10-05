// problem link: https://leetcode.com/problems/consecutive-characters/

class Solution {
public:
    int maxPower(string s) {       
        int maxx=1,count=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) count++;
            else count=1;
            maxx=max(maxx,count);
        }
        return maxx;
    }
};
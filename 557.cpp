// problem link : https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        for(int i=0;i<s.size();i++){
            int j=i;
            while(s[i] && s[i]!=' ') i++;
            reverse(s.begin()+j,s.begin()+i);
        }
        return s;
    }
};
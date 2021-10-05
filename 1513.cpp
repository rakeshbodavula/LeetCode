// problem link : https://leetcode.com/problems/number-of-substrings-with-only-1s/

class Solution {
public:
    int numSub(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        long long sum=0,count=0;
        int mod=7+pow(10,9);
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') count++;
            else sum+=((count+1)*count/2)%mod,count=0;
        }
        sum+=((count+1)*count/2)%mod;
        return sum;
    }
};
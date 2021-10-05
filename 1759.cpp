// problem link : https://leetcode.com/problems/count-number-of-homogenous-substrings/

class Solution {
public:
    int countHomogenous(string s) {
        long long sum=1,maxx=0;
        long long mod=7+pow(10,9);
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]) sum++;
            else{
                maxx+=((sum+1)*sum/2)%mod;
                sum=1;
            }
        }
        maxx+=((sum+1)*sum/2)%mod;
        return maxx%mod;
    }
};
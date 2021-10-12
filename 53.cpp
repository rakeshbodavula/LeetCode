// problem link: https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx=INT_MIN,sum=0;
        for(int i:nums){
            sum+=i;
            maxx=max(maxx,sum);
            if(sum<0) sum=0;
        }
        return maxx;
    }
};
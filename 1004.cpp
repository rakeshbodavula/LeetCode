// link to problem : https://leetcode.com/problems/max-consecutive-ones-iii/

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zerocount=0,ans=0,start=0;
        for(int end=0;end<nums.size();end++){
            if(nums[end]==0) zerocount++;
            while(zerocount-k>0){
                if(nums[start]==0) zerocount--;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};
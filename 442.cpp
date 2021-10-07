// problem link: https://leetcode.com/problems/find-all-duplicates-in-an-array/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>arr;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int tmp=abs(nums[i]);
            if(nums[tmp-1]<0) arr.push_back(tmp);
            else nums[tmp-1]*=-1;
        }
        return arr;
    }
};
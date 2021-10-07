// problem link: https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            int tmp=abs(nums[i]);
            if(nums[tmp-1]>0) nums[tmp-1]*=-1;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) arr.push_back(i+1);
        }
        return arr;
    }
};
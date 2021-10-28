// problem link : https://leetcode.com/problems/3sum/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>arr;
        int l,r;
        for(int i=0;i<nums.size();i++){
            l=i+1,r=nums.size()-1;
            while(l<r){
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==0){
                    arr.insert({nums[i],nums[l++],nums[r--]});
                }
                else if(sum>0) r--;
                else l++;
            }
        }
        vector<vector<int>>res;
        for(auto i:arr) res.push_back(i);
        return res;
    }
};
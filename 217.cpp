// problem link: https://leetcode.com/problems/contains-duplicate/

// Hashing

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>arr;
        for(int i:nums){
            arr[i]++;
            if(arr[i]>1) return true;
        }
        return false;
    }
};

// Sorting and Array

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};
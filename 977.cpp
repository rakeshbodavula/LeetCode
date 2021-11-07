// problem link : https://leetcode.com/problems/squares-of-a-sorted-array/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>arr(nums.size());
        int i=0,j=nums.size()-1,count=nums.size()-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                arr[count--]=nums[i]*nums[i];
                i++;
            }
            else{
                arr[count--]=nums[j]*nums[j];
                j--;
            }
        }
        return arr;
    }
};
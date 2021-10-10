// problem link : https://leetcode.com/problems/arithmetic-subarrays/

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {        
        vector<int>arr(nums);
        vector<bool>res;
        int m=l.size();
        for(int i=0;i<m;i++){
            arr.assign(nums.begin(),nums.end());
            sort(arr.begin()+l[i],arr.begin()+r[i]+1);
            int diff=arr[l[i]+1]-arr[l[i]],flag=0;
            for(int j=l[i]+2;j<=r[i];j++){
                if(arr[j]-arr[j-1] !=diff){
                    res.push_back(0);
                    flag=1;
                    break;
                }
            }
            if(flag==0) res.push_back(1);
        }
        return res;
    }
};
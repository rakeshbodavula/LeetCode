// problem link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

class Solution {
public:
    int minDays(vector<int>& day, int m, int k) {      
        int n=day.size();
        if(n<m*k) return -1;
        if(n==m*k) return *max_element(day.begin(),day.end());
        int l=*min_element(day.begin(),day.end());
        int r=*max_element(day.begin(),day.end());
        int mid;
        while(r>l){
            mid=l+(r-l)/2;
            int count=0,sum=0;
            for(int i=0;i<n;i++){
                if(day[i]<=mid) count++;
                else sum+=count/k,count=0;
                if(sum>=m) break;
            }
            sum+=count/k;
            if(sum>=m) r=mid;
            else l=mid+1;
        }
        return l;
    }
};
// problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx=0,minn=INT_MAX;
        for(int i:prices){
            minn=min(minn,i);
            maxx=max(maxx,i-minn);
        }
        return maxx;
    }
};
// problem link : https://leetcode.com/problems/teemo-attacking/?

class Solution {
public:
    int findPoisonedDuration(vector<int>& time, int dur) {
        int count=dur;
        for(int i=1;i<time.size();i++){
            count+=min(time[i]-time[i-1],dur);
        }
        return count;
    }
};
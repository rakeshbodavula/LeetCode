// problem link: https://leetcode.com/problems/pascals-triangle/

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> arr(n);
        arr[0].push_back(1);
        if(n==1) return arr;
        arr[1].push_back(1);
        arr[1].push_back(1);
        for(int i=2;i<n;i++){
            arr[i].push_back(1);
            for(int j=1;j<i;j++){
                arr[i].push_back(arr[i-1][j]+arr[i-1][j-1]);
            }
            arr[i].push_back(1);
        }
        return arr;
    }
};
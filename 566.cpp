// problem link: https://leetcode.com/problems/reshape-the-matrix/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size(),n=mat[0].size();
        if(r*c!=m*n) return mat;
        vector<vector<int>>arr(r,vector<int>(c));
        int row=1,col=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr[row-1][col-1]=mat[i][j];
                col++;
                row+=(col>c);
                if(col>c) col=1;
            }
        }
        return arr;
    }
};
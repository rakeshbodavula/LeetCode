// problem link: https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& bed, int n) {
        int count=0,len=bed.size();
        if(len==1){
            if(bed[0]==0) return n<=1;
            else return n==0;
        }
        for(int i=1;i<bed.size()-1;i++){
            if(bed[i]==0){
                if(bed[i-1]==0 && bed[i+1]==0) bed[i]=1,count++;
            }
        }
        if(len>1 && bed[0]==0 && bed[1]==0) count++;
        if(len>1 && bed.back()==0 && bed[len-2]==0) count++;
        return count>=n;
    }
};
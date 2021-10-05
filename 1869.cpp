// problem link :https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/

class Solution {
public:
    bool checkZeroOnes(string s) {
        int one=0,zero=0,a=0,b=0;
        for(auto i:s){
            if(i=='0'){
                a++;
                one=max(b,one);
                b=0;
            }
            else{
                b++;
                zero=max(zero,a);
                a=0;
            }
        }
        zero=max(a,zero);
        one=max(b,one);
    return (one>zero);
    }
};
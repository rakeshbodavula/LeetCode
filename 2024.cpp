// problem link : https://leetcode.com/problems/maximize-the-confusion-of-an-exam/

class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int left = 0, r = 0, T = 0, F = 0, ans = 0;
	    while(r < s.length()) {
            s[r] == 'T' ? T++ : F++;
            while(min(T, F) > k) s[left++] == 'T' ? T-- : F--;
            ans = max(ans, r - left + 1), r++;
	    }
	return ans;
    }
};

/*
class Solution {
public:
    int maxConsecutiveAnswers(string ans, int k) {
        char a='T';
        int start=0,res=0,count=0;
        for(int end=0;end<ans.size();end++){
            if(ans[end]!=a) count++;
            while(count-k>0){
                if(ans[start]!=a) count--;
                start++;
            }
            res=max(res,end-start+1);
        }
        a='F';
        start=0,count=0;
        for(int end=0;end<ans.size();end++){
            if(ans[end]!=a) count++;
            while(count-k>0){
                if(ans[start]!=a) count--;
                start++;
            }
            res=max(res,end-start+1);
        }
        return res;
    }
};
*/
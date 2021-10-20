// problem link: https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0 || s[0]==')' || s[0]==']' ||s[0]=='}') return false;
        stack<char>stack;
        for(char i:s){
            if(i=='(' || i=='[' || i=='{') stack.push(i);
            else if(i==')'){
                if(stack.empty()) return false;
                if(stack.top()!='(') return false;
                else stack.pop();
            }
            else if(i==']'){
                if(stack.empty()) return false;
                if(stack.top()!='[') return false;
                else stack.pop();
            }
            else if(i=='}'){
                if(stack.empty()) return false;
                if(stack.top()!='{') return false;
                else stack.pop();
            }
        }
        return stack.empty();
    }
};
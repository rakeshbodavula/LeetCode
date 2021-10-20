// problem link: https://leetcode.com/problems/implement-queue-using-stacks/



// using vector

class MyQueue {
public:
    vector<int>arr;
    MyQueue() {
        
    }
    
    void push(int x) {
        arr.push_back(x);
    }
    
    int pop() {
        int tmp=arr[0];
        arr.erase(arr.begin());
        return tmp;
    }
    
    int peek() {
        return arr[0];
    }
    
    bool empty() {
        return !arr.size();
    }
};


// using 2 stacks

class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
        }
        int tmp=s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return tmp;
    }
    
    int peek() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int tmp=s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return tmp;
    }
    
    bool empty() {
        return s1.empty();
    }
};


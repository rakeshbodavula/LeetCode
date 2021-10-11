// problem link: https://leetcode.com/problems/binary-tree-preorder-traversal/

// Iterative

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>arr;
        if(root==NULL) return arr;
        stack<TreeNode*>stack;
        stack.push(root);
        while(!stack.empty()){
            TreeNode* tmp=stack.top();
            arr.push_back(tmp->val);
            stack.pop();
            if(tmp->right) stack.push(tmp->right);
            if(tmp->left) stack.push(tmp->left);
        }
        return arr;
    }
};

// recursive

class Solution {
public:    
    vector<int>arr;
    void pre(TreeNode*root){
        if(root==NULL) return;
        arr.push_back(root->val);
        pre(root->left);
        pre(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        pre(root);
        return arr;
    }
};
// problem link: https://leetcode.com/problems/binary-tree-inorder-traversal/

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root) return {};
        stack<TreeNode*>stack;
        vector<int>arr;
        TreeNode* tmp=root;
        while(tmp || !stack.empty()){
            while(tmp){
                stack.push(tmp);
                tmp=tmp->left;
            }
            if(!tmp && !stack.empty()){
            tmp=stack.top();
            arr.push_back(tmp->val);
            stack.pop();
            tmp=tmp->right;
            }
        }
        return arr;
    }
};
// problem link : https://leetcode.com/problems/binary-tree-level-order-traversal/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>arr;
            int count=q.size();
            while(count--){   
                TreeNode* tmp=q.front();
                arr.push_back(tmp->val);
                if(tmp->left) q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);
                q.pop();
            }
            res.push_back(arr);
        }
        return res;
    }
};
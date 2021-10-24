// problem link : https://leetcode.com/problems/search-in-a-binary-search-tree/

// Recursive: 

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return root;
        else if(root->val==val) return root;
        else if(root->val>val) return searchBST(root->left,val);
        else return searchBST(root->right,val);
        return root;
    }
};

// Iterative

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return root;
        while(root){
            if(root->val==val) return root;
            else if(root->val>val) root=root->left;
            else root=root->right;
        }
        return NULL;
    }
};
/*
111. Minimum Depth of Binary Tree
Easy
6.3K
1.2K
Companies

Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.

 

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: 2

Example 2:

Input: root = [2,null,3,null,4,null,5,null,6]
Output: 5

 

Constraints:

    The number of nodes in the tree is in the range [0, 105].
    -1000 <= Node.val <= 1000



*/
/*

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 
class Solution {
    void func(TreeNode* root, int count, int &ans){
        if(root->left==NULL && root->right==NULL){
            ans=min(ans, count);
            return;
        }
        if(root->left != NULL) func(root->left, count+1, ans);
        if(root->right != NULL) func(root->right, count+1, ans);
        root->left = NULL;
        root->right= NULL;
    }
public:
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        //else func(root, 0, ans);
        int ans=1e9;
        func(root, 0, ans);
        return ans+1;
    }
};
*/
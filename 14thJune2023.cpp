/*

530. Minimum Absolute Difference in BST
Easy
3.3K
166
Companies

Given the root of a Binary Search Tree (BST), return the minimum absolute difference between the values of any two different nodes in the tree.

 

Example 1:

Input: root = [4,2,6,1,3]
Output: 1

Example 2:

Input: root = [1,0,48,null,null,12,49]
Output: 1

 

Constraints:

    The number of nodes in the tree is in the range [2, 104].
    0 <= Node.val <= 105

 

Note: This question is the same as 783: https://leetcode.com/problems/minimum-distance-between-bst-nodes/

*/

/*
class Solution {
public:
    int min_dif = INT_MAX;
    int val = -1;
int getMinimumDifference(TreeNode* root) {
    if (root->left != NULL)
        getMinimumDifference(root->left);
    if (val >= 0)
        min_dif = min(min_dif, root->val - val);
    val = root->val;
    if (root->right != NULL)
        getMinimumDifference(root->right);
    return min_dif;
    }
};

*/
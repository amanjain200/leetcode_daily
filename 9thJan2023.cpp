/*
144. Binary Tree Preorder Traversal

Given the root of a binary tree, return the preorder traversal of its nodes' values.

 

Example 1:


Input: root = [1,null,2,3]
Output: [1,2,3]
Example 2:

Input: root = []
Output: []
Example 3:

Input: root = [1]
Output: [1]
 

Constraints:

The number of nodes in the tree is in the range [0, 100].
-100 <= Node.val <= 100

*/

#include<iostream>
#include<vector>
//#include<tree>
using namespace std;

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
 */
/*
class Solution {
public:
    void pot(TreeNode * root, vector<int> &arr){
        if (root == NULL){
        }
        else{
            arr.push_back(root->val);
            pot(root->left, arr);
            pot(root->right, arr);
        }
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        pot(root, v);
        return v;
    }
};
*/

/*
515. Find Largest Value in Each Tree Row
Solved
Medium
Topics
Companies

Given the root of a binary tree, return an array of the largest value in each row of the tree (0-indexed).

 

Example 1:

Input: root = [1,3,2,5,3,null,9]
Output: [1,3,9]

Example 2:

Input: root = [1,2,3]
Output: [1,3]

 

Constraints:

    The number of nodes in the tree will be in the range [0, 104].
    -231 <= Node.val <= 231 - 1




*/
/*
#include <iostream>
#include <vector>
#include <queue>
#include <climits>

class Solution {
public:
    std::vector<int> largestValues(TreeNode* root) {
        if (!root) {
            return {};
        }
        
        std::queue<TreeNode*> q;
        q.push(root);
        std::vector<int> res;

        while (!q.empty()) {
            int size = q.size();
            int max_val = INT_MIN;

            for (int i = 0; i < size; ++i) {
                TreeNode* node = q.front();
                q.pop();

                max_val = std::max(max_val, node->val);

                if (node->left) {
                    q.push(node->left);
                }

                if (node->right) {
                    q.push(node->right);
                }
            }

            res.push_back(max_val);
        }

        return res;
    }
};


*/
/*

1361. Validate Binary Tree Nodes
Solved
Medium
Topics
Companies
Hint

You have n binary tree nodes numbered from 0 to n - 1 where node i has two children leftChild[i] and rightChild[i], return true if and only if all the given nodes form exactly one valid binary tree.

If node i has no left child then leftChild[i] will equal -1, similarly for the right child.

Note that the nodes have no values and that we only use the node numbers in this problem.

 

Example 1:

Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,-1,-1,-1]
Output: true

Example 2:

Input: n = 4, leftChild = [1,-1,3,-1], rightChild = [2,3,-1,-1]
Output: false

Example 3:

Input: n = 2, leftChild = [1,0], rightChild = [-1,-1]
Output: false

 

Constraints:

    n == leftChild.length == rightChild.length
    1 <= n <= 104
    -1 <= leftChild[i], rightChild[i] <= n - 1


*/
/*
class Solution {
public:
    bool validateBinaryTreeNodes(int n, std::vector<int>& leftChild, std::vector<int>& rightChild) {
        std::vector<int> indegree(n, 0);
        for (int i = 0; i < n; ++i) {
            if (leftChild[i] != -1) indegree[leftChild[i]]++;
            if (rightChild[i] != -1) indegree[rightChild[i]]++;
        }
        int root = -1;
        for (int i = 0; i < n; ++i) {
            if (indegree[i] == 0) {
                if (root == -1) root = i;
                else return false;
            }
        }
        if (root == -1) return false;
        std::vector<bool> visited(n, false);
        std::queue<int> queue;
        queue.push(root);
        while (!queue.empty()) {
            int node = queue.front(); queue.pop();
            if (visited[node]) return false;
            visited[node] = true;
            if (leftChild[node] != -1) queue.push(leftChild[node]);
            if (rightChild[node] != -1) queue.push(rightChild[node]);
        }
        return std::accumulate(visited.begin(), visited.end(), 0) == n;
    }
};

*/
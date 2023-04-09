/*

1857. Largest Color Value in a Directed Graph
Hard
1.2K
41
Companies
There is a directed graph of n colored nodes and m edges. The nodes are numbered from 0 to n - 1.

You are given a string colors where colors[i] is a lowercase English letter representing the color of the ith node in this graph (0-indexed). You are also given a 2D array edges where edges[j] = [aj, bj] indicates that there is a directed edge from node aj to node bj.

A valid path in the graph is a sequence of nodes x1 -> x2 -> x3 -> ... -> xk such that there is a directed edge from xi to xi+1 for every 1 <= i < k. The color value of the path is the number of nodes that are colored the most frequently occurring color along that path.

Return the largest color value of any valid path in the given graph, or -1 if the graph contains a cycle.

 

Example 1:



Input: colors = "abaca", edges = [[0,1],[0,2],[2,3],[3,4]]
Output: 3
Explanation: The path 0 -> 2 -> 3 -> 4 contains 3 nodes that are colored "a" (red in the above image).
Example 2:



Input: colors = "a", edges = [[0,0]]
Output: -1
Explanation: There is a cycle from 0 to 0.
 

Constraints:

n == colors.length
m == edges.length
1 <= n <= 105
0 <= m <= 105
colors consists of lowercase English letters.
0 <= aj, bj < n
*/

/*
class Solution {
    void dfs(int curr, string &colors, vector<int> adjList[], vector<bool> &visited, vector<bool> &currPath, vector<vector<int>> &count, int &ans) {
        if(currPath[curr] || ans == -1) {
            ans = -1;
            return;
        }
        if(visited[curr]) return;
        visited[curr] = true;
        currPath[curr] = true;
        for(int next: adjList[curr]) {
            dfs(next, colors, adjList, visited, currPath, count, ans);
            if(ans == -1) return;
            for(int i = 0; i < 26; i++) {
                count[curr][i] = max(count[curr][i], count[next][i]);
            }
        }
        count[curr][colors[curr] - 'a']++;
        ans = max(ans, count[curr][colors[curr] - 'a']);
        currPath[curr] = false;
    }
public:
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        int n = colors.length();
        vector<int> adjList[n];
        for(vector<int> edge: edges) {
            adjList[edge[0]].push_back(edge[1]);
        }
        int ans = INT_MIN;
        vector<bool> visited(n), currPath(n);
        vector<vector<int>> count(n, vector<int>(26));
        for(int i = 0; i < n; i++) {
            dfs(i, colors, adjList, visited, currPath, count, ans);
        }
        return ans;
    }
};

*/
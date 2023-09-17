/*

847. Shortest Path Visiting All Nodes
Solved
Hard
Topics
Companies

You have an undirected, connected graph of n nodes labeled from 0 to n - 1. You are given an array graph where graph[i] is a list of all the nodes connected with node i by an edge.

Return the length of the shortest path that visits every node. You may start and stop at any node, you may revisit nodes multiple times, and you may reuse edges.

 

Example 1:

Input: graph = [[1,2,3],[0],[0],[0]]
Output: 4
Explanation: One possible path is [1,0,2,0,3]

Example 2:

Input: graph = [[1],[0,2,4],[1,3,4],[2],[1,2]]
Output: 4
Explanation: One possible path is [0,1,4,2,3]

 

Constraints:

    n == graph.length
    1 <= n <= 12
    0 <= graph[i].length < n
    graph[i] does not contain i.
    If graph[a] contains b, then graph[b] contains a.
    The input graph is always connected.


*/
/*
class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int numNodes = graph.size();
        int allVisitedMask = (1 << numNodes) - 1;
        queue<pair<int, pair<int, int>>> q;
        
        // Initialize visited array
        bool visited[allVisitedMask + 1][numNodes];
        memset(visited, false, sizeof visited);

        // Start from each node and add it to the queue as a starting point
        for (int node = 0; node < numNodes; ++node) {
            int initialMask = (1 << node);
            q.push({node, {initialMask, 1}});
            visited[initialMask][node] = true;
        }

        while (!q.empty()) {
            auto current = q.front();
            q.pop();

            int currentNode = current.first;
            int currentMask = current.second.first;
            int currentLength = current.second.second;

            // Check if all nodes have been visited
            if (currentMask == allVisitedMask)
                return currentLength - 1;

            // Explore the neighbors of the current node
            for (int i = 0; i < graph[currentNode].size(); ++i) {
                int neighbor = graph[currentNode][i];
                int newMask = currentMask | (1 << neighbor);

                // Check if this state has been visited before
                if (visited[newMask][neighbor])
                    continue;

                // Add the neighbor to the queue with updated state
                q.push({neighbor, {newMask, currentLength + 1}});
                visited[newMask][neighbor] = true;
            }
        }
        return -1;  // No valid path found
    }
};


*/
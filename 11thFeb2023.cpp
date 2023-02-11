/*
1129. Shortest Path with Alternating Colors
Medium
2.4K
118
Companies
You are given an integer n, the number of nodes in a directed graph where the nodes are labeled from 0 to n - 1. Each edge is red or blue in this graph, and there could be self-edges and parallel edges.

You are given two arrays redEdges and blueEdges where:

redEdges[i] = [ai, bi] indicates that there is a directed red edge from node ai to node bi in the graph, and
blueEdges[j] = [uj, vj] indicates that there is a directed blue edge from node uj to node vj in the graph.
Return an array answer of length n, where each answer[x] is the length of the shortest path from node 0 to node x such that the edge colors alternate along the path, or -1 if such a path does not exist.

 

Example 1:

Input: n = 3, redEdges = [[0,1],[1,2]], blueEdges = []
Output: [0,1,-1]
Example 2:

Input: n = 3, redEdges = [[0,1]], blueEdges = [[2,1]]
Output: [0,1,-1]
 

Constraints:

1 <= n <= 100
0 <= redEdges.length, blueEdges.length <= 400
redEdges[i].length == blueEdges[j].length == 2
0 <= ai, bi, uj, vj < n

*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
        vector<pair<int, int>> adj[n];
        for(auto it : redEdges)
        {
            adj[it[0]].push_back({it[1], 1});
        }
        for(auto it : blueEdges)
        {
            adj[it[0]].push_back({it[1], 2});
        }

        vector<vector<int>> dist(n, vector<int> (3, 1e9));

        queue<pair<int, int>> q;

        q.push({0, 0});

        dist[0][0] = 0;

        while(!q.empty())
        {
            int node = q.front().first;
            int prev_color = q.front().second;
            q.pop();

            for(auto it : adj[node])
            {
                int adj_node = it.first;
                int color = it.second;
                if(color == prev_color) continue;
                if(dist[adj_node][color] == 1e9)
                {
                    dist[adj_node][color] = dist[node][prev_color] + 1;
                    q.push({adj_node, color});
                }
            }
        } 

        vector<int> ans(n, 0);

        for(int i = 1; i < n; i++)
        {
            ans[i] = min(dist[i][1], dist[i][2]);
            if(ans[i] == 1e9) 
            {
                ans[i] = -1;
            }
        }
        return ans;
    }
};
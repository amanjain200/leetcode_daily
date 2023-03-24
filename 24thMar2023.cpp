/*
1466. Reorder Routes to Make All Paths Lead to the City Zero
Medium
3K
73
Companies
There are n cities numbered from 0 to n - 1 and n - 1 roads such that there is only one way to travel between two different cities (this network form a tree). Last year, The ministry of transport decided to orient the roads in one direction because they are too narrow.

Roads are represented by connections where connections[i] = [ai, bi] represents a road from city ai to city bi.

This year, there will be a big event in the capital (city 0), and many people want to travel to this city.

Your task consists of reorienting some roads such that each city can visit the city 0. Return the minimum number of edges changed.

It's guaranteed that each city can reach city 0 after reorder.

 

Example 1:


Input: n = 6, connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]
Output: 3
Explanation: Change the direction of edges show in red such that each node can reach the node 0 (capital).
Example 2:


Input: n = 5, connections = [[1,0],[1,2],[3,2],[3,4]]
Output: 2
Explanation: Change the direction of edges show in red such that each node can reach the node 0 (capital).
Example 3:

Input: n = 3, connections = [[1,0],[2,0]]
Output: 0
 

Constraints:

2 <= n <= 5 * 104
connections.length == n - 1
connections[i].length == 2
0 <= ai, bi <= n - 1
ai != bi

*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> graph(n);
        for(auto &v: connections){
            graph[v[0]].push_back({v[1],1});
            graph[v[1]].push_back({v[0],0});
        }
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<bool> vis(n,false);
        int ans=0;
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            vis[p.first]=true;
            ans+=p.second;
            for(auto &x: graph[p.first]){
                if(vis[x.first])continue;
                q.push(x);
            }
        }
        return ans;
    }
};
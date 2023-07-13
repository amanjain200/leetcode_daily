/*
207. Course Schedule
Medium
14.2K
565
Companies

There are a total of numCourses courses you have to take, labeled from 0 to numCourses - 1. You are given an array prerequisites where prerequisites[i] = [ai, bi] indicates that you must take course bi first if you want to take course ai.

    For example, the pair [0, 1], indicates that to take course 0 you have to first take course 1.

Return true if you can finish all courses. Otherwise, return false.

 

Example 1:

Input: numCourses = 2, prerequisites = [[1,0]]
Output: true
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0. So it is possible.

Example 2:

Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.

 

Constraints:

    1 <= numCourses <= 2000
    0 <= prerequisites.length <= 5000
    prerequisites[i].length == 2
    0 <= ai, bi < numCourses
    All the pairs prerequisites[i] are unique.


*/
/*

class Solution {
    bool dfs(int node, vector<int> adj[], vector<int> &vis, vector<int> &rst){
        vis[node] = 1;
        rst[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                if(dfs(it, adj, vis, rst)==false) return false;
            }else if(rst[it]){
                return false;
            }
        }
        rst[node]=0;
        return true;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        if(prerequisites.size()==0) return true;
        if(numCourses==1) return true;
        //its based on topological sorting
        vector<int> adj[numCourses];
        for(auto it: prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> vis(numCourses, 0),rst(numCourses,0);
        for(int i=0; i<numCourses; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, rst)==false) return false;
            }
        }
        //bool check = dfs(prerequisites[0][0], adj, st, vis);
        return true;

    }
};

*/
/*
934. Shortest Bridge
Medium
4.4K
170
Companies
You are given an n x n binary matrix grid where 1 represents land and 0 represents water.

An island is a 4-directionally connected group of 1's not connected to any other 1's. There are exactly two islands in grid.

You may change 0's to 1's to connect the two islands to form one island.

Return the smallest number of 0's you must flip to connect the two islands.

 

Example 1:

Input: grid = [[0,1],[1,0]]
Output: 1
Example 2:

Input: grid = [[0,1,0],[0,0,0],[0,0,1]]
Output: 2
Example 3:

Input: grid = [[1,1,1,1,1],[1,0,0,0,1],[1,0,1,0,1],[1,0,0,0,1],[1,1,1,1,1]]
Output: 1
 

Constraints:

n == grid.length == grid[i].length
2 <= n <= 100
grid[i][j] is either 0 or 1.
There are exactly two islands in grid.

*/

/*

class Solution {
public:
    vector<pair<int,int>> first,second;
    
    void mark(int i,int j, int no, vector<vector<int>>& grid)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]!=1) return;
        grid[i][j]=no;

        if(no==2) first.push_back({i,j});
        else second.push_back({i,j});

        mark(i+1,j,no,grid);
        mark(i-1,j,no,grid);
        mark(i,j+1,no,grid);
        mark(i,j-1,no,grid);
    }
    
    
    int shortestBridge(vector<vector<int>>& grid) {
        int count=2;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1){
                mark(i,j,count,grid);
                count++;}
            }
        }
        int ans=1000000;
        for(int i=0;i<first.size();i++)
            for(int j=0;j<second.size();j++)
                ans=min(abs(first[i].first-second[j].first)+abs(first[i].second-second[j].second)-1,ans);
        return ans;
    }
};
*/
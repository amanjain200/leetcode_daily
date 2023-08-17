/*
542. 01 Matrix
Medium
8.3K
368
Companies

Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.

The distance between two adjacent cells is 1.

 

Example 1:

Input: mat = [[0,0,0],[0,1,0],[0,0,0]]
Output: [[0,0,0],[0,1,0],[0,0,0]]

Example 2:

Input: mat = [[0,0,0],[0,1,0],[1,1,1]]
Output: [[0,0,0],[0,1,0],[1,2,1]]

 

Constraints:

    m == mat.length
    n == mat[i].length
    1 <= m, n <= 104
    1 <= m * n <= 104
    mat[i][j] is either 0 or 1.
    There is at least one 0 in mat.


*/
/*
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<pair<int,int>,int>> q;
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        //those who are already 0
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==0){
                    ans[i][j] = 0;
                    q.push({{i,j},0});
                } 
            }
        }
        
        

        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dist=q.front().second;
            q.pop();
            vis[row][col] = true;
            for(int i=0; i<4; i++){
                int nr = row+dx[i];
                int nc = col+dy[i];
                if(nr<m && nc<n && nr>=0 && nc>=0 && !vis[nr][nc]){
                    if(ans[nr][nc]==-1){
                        ans[nr][nc]=dist+1;
                    }
                    q.push({{nr,nc}, dist+1});
                }
            }

        }


        
        
        return ans;
    }
};
*/
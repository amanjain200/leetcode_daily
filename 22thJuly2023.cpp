/*
688. Knight Probability in Chessboard
Medium
3K
383
Companies

On an n x n chessboard, a knight starts at the cell (row, column) and attempts to make exactly k moves. The rows and columns are 0-indexed, so the top-left cell is (0, 0), and the bottom-right cell is (n - 1, n - 1).

A chess knight has eight possible moves it can make, as illustrated below. Each move is two cells in a cardinal direction, then one cell in an orthogonal direction.

Each time the knight is to move, it chooses one of eight possible moves uniformly at random (even if the piece would go off the chessboard) and moves there.

The knight continues moving until it has made exactly k moves or has moved off the chessboard.

Return the probability that the knight remains on the board after it has stopped moving.

 

Example 1:

Input: n = 3, k = 2, row = 0, column = 0
Output: 0.06250
Explanation: There are two moves (to (1,2), (2,1)) that will keep the knight on the board.
From each of those positions, there are also two moves that will keep the knight on the board.
The total probability the knight stays on the board is 0.0625.

Example 2:

Input: n = 1, k = 0, row = 0, column = 0
Output: 1.00000

 

Constraints:

    1 <= n <= 25
    0 <= k <= 100
    0 <= row, column <= n - 1


*/
/*
vector<int> dx={-1, 1, -1, 1, -2, -2, 2, 2};
vector<int> dy={2, 2, -2, -2, 1, -1, 1, -1};
class Solution {
    double func(int r, int c, int n, int k, unordered_map<string, double> &mp){
        //base case
        if(r<0 || c<0 || r>=n || c>=n){
            return 0;
        }

        if(k==0){
            return 1;
        }

        string key = to_string(r) + "_" + to_string(c) + "_" + to_string(k);

        if(mp[key]) return mp[key];

        double ans = 0;
        for(int i=0; i<8; i++){
            int row = r+dx[i];
            int col = c+dy[i];
            ans+= func(row, col, n, k-1, mp);
        }

        return mp[key] = (double)(ans)/(8.0);
    }
public:
    double knightProbability(int n, int k, int row, int column) {
        unordered_map<string, double> mp;
        if(k==0) return 1;
         
        return func(row,column, n, k, mp);
    }
};

*/
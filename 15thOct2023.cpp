/*
1269. Number of Ways to Stay in the Same Place After Some Steps
Solved
Hard
Topics
Companies
Hint

You have a pointer at index 0 in an array of size arrLen. At each step, you can move 1 position to the left, 1 position to the right in the array, or stay in the same place (The pointer should not be placed outside the array at any time).

Given two integers steps and arrLen, return the number of ways such that your pointer is still at index 0 after exactly steps steps. Since the answer may be too large, return it modulo 109 + 7.

 

Example 1:

Input: steps = 3, arrLen = 2
Output: 4
Explanation: There are 4 differents ways to stay at index 0 after 3 steps.
Right, Left, Stay
Stay, Right, Left
Right, Stay, Left
Stay, Stay, Stay

Example 2:

Input: steps = 2, arrLen = 4
Output: 2
Explanation: There are 2 differents ways to stay at index 0 after 2 steps
Right, Left
Stay, Stay

Example 3:

Input: steps = 4, arrLen = 2
Output: 8

 

Constraints:

    1 <= steps <= 500
    1 <= arrLen <= 106


*/
/*
class Solution {
    int dp[502][504];
    int mod=1e9+7;
    int func(int steps, int len, int pos){
        if(steps==0){
            if(pos==0) return dp[steps][pos] = 1;
            else return dp[steps][pos] = 0;
        }

        if(dp[steps][pos] != -1) return dp[steps][pos];

        //left,right,stay
        int left=0;
        int right=0;
        if(pos > 0) left=func(steps-1, len, pos-1);
        if(pos < len-1) right=func(steps-1, len, pos+1);
        int stay=func(steps-1, len, pos);
        return dp[steps][pos] = ((left%mod + right%mod)%mod + stay%mod)%mod;
    }
public:
    int numWays(int steps, int arrLen) {
        memset(dp, -1, sizeof(dp));
        return func(steps, arrLen, 0);
    }
};

*/
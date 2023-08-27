/*
403. Frog Jump
Hard
4.8K
224
Companies

A frog is crossing a river. The river is divided into some number of units, and at each unit, there may or may not exist a stone. The frog can jump on a stone, but it must not jump into the water.

Given a list of stones' positions (in units) in sorted ascending order, determine if the frog can cross the river by landing on the last stone. Initially, the frog is on the first stone and assumes the first jump must be 1 unit.

If the frog's last jump was k units, its next jump must be either k - 1, k, or k + 1 units. The frog can only jump in the forward direction.

 

Example 1:

Input: stones = [0,1,3,5,6,8,12,17]
Output: true
Explanation: The frog can jump to the last stone by jumping 1 unit to the 2nd stone, then 2 units to the 3rd stone, then 2 units to the 4th stone, then 3 units to the 6th stone, 4 units to the 7th stone, and 5 units to the 8th stone.

Example 2:

Input: stones = [0,1,2,3,4,8,9,11]
Output: false
Explanation: There is no way to jump to the last stone as the gap between the 5th and 6th stone is too large.

 

Constraints:

    2 <= stones.length <= 2000
    0 <= stones[i] <= 231 - 1
    stones[0] == 0
    stones is sorted in a strictly increasing order.


*/
/*
class Solution {
public:
    bool help(int i,int k,vector<int>&s,vector<vector<int>>&dp){
        if(i==s.size()-1){
            return true;
        }
        bool a=false;
        if(dp[i][k]!=-1)return dp[i][k];
        for(int j=i+1;j<s.size();j++){
            if(s[j]>(s[i]+k+1))break;
            else if(s[j]==(s[i]+k-1)){
                a |= help(j,k-1,s,dp);
            }
            else if(s[j]==(s[i]+k)){
                 a |= help(j,k,s,dp);
            }
            else if(s[j]==(s[i]+k+1)){
                a |= help(j,k+1,s,dp);
            }
        }
        return dp[i][k]= a;
    }
    bool canCross(vector<int>& s) {
        vector<vector<int>>dp(s.size()+2,vector<int>(4000,-1));
        return help(0,0,s,dp);
    }
};
*/
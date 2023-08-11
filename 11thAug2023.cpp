/*

518. Coin Change II
Medium
8.2K
140
Companies

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the number of combinations that make up that amount. If that amount of money cannot be made up by any combination of the coins, return 0.

You may assume that you have an infinite number of each kind of coin.

The answer is guaranteed to fit into a signed 32-bit integer.

 

Example 1:

Input: amount = 5, coins = [1,2,5]
Output: 4
Explanation: there are four ways to make up the amount:
5=5
5=2+2+1
5=2+1+1+1
5=1+1+1+1+1

Example 2:

Input: amount = 3, coins = [2]
Output: 0
Explanation: the amount of 3 cannot be made up just with coins of 2.

Example 3:

Input: amount = 10, coins = [10]
Output: 1

 

Constraints:

    1 <= coins.length <= 300
    1 <= coins[i] <= 5000
    All the values of coins are unique.
    0 <= amount <= 5000


*/

/*
class Solution {
    int func(int index, int amount, vector<int>& coins, vector<vector<int>> &dp){
        //base case
        if(index==-1){
            if(amount == 0) return 1;
            else return 0;
        }
        //if(amount == 0) return 1;

        //momoization
        if(dp[index][amount] != -1) return dp[index][amount];

        //take
        int take = 0;
        if(coins[index] <= amount) take = func(index, amount-coins[index], coins, dp);
        //not take
        int notTake = func(index-1, amount, coins, dp);

        return dp[index][amount] = take + notTake;
    }
public:
    int change(int amount, vector<int>& coins) {
        if(amount ==0) return 1;
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1, 0));
        //return func(coins.size()-1, amount, coins, dp);

        //base case
        for(int i=0; i<=coins.size(); i++){
            //when amount is zero
            dp[i][0] = 1;
        }

        //filling the table using nested loops
        for(int ind=1; ind<=coins.size(); ind++){
            for(int amt=1; amt<=amount; amt++){
                int take = 0;
                if(coins[ind-1] <= amt) take = dp[ind][amt-coins[ind-1]];
                int notTake = dp[ind-1][amt];
                dp[ind][amt] = take + notTake;
            }
        }

        return dp[coins.size()][amount];


    }
};


*/
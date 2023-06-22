/*

714. Best Time to Buy and Sell Stock with Transaction Fee
Medium
6.1K
158
Companies

You are given an array prices where prices[i] is the price of a given stock on the ith day, and an integer fee representing a transaction fee.

Find the maximum profit you can achieve. You may complete as many transactions as you like, but you need to pay the transaction fee for each transaction.

Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

 

Example 1:

Input: prices = [1,3,2,8,4,9], fee = 2
Output: 8
Explanation: The maximum profit can be achieved by:
- Buying at prices[0] = 1
- Selling at prices[3] = 8
- Buying at prices[4] = 4
- Selling at prices[5] = 9
The total profit is ((8 - 1) - 2) + ((9 - 4) - 2) = 8.

Example 2:

Input: prices = [1,3,7,5,10,3], fee = 3
Output: 6

 

Constraints:

    1 <= prices.length <= 5 * 104
    1 <= prices[i] < 5 * 104
    0 <= fee < 5 * 104


*/

/*
class Solution {
public:
    int solve(int i,int &n,vector<int> &v,int &k,vector<vector<int>> &dp,int x){
        if(i>=n)return 0;
        if(dp[i][x]!=-1)return dp[i][x];
        int ans1 = solve(i+1,n,v,k,dp,x);
        int ans2 = 0;
        if(x){
            ans2 = -v[i]-k+solve(i+1,n,v,k,dp,0);
        }else{
            ans2 =  v[i]+solve(i+1,n,v,k,dp,1);
        }
        return dp[i][x] = max(ans1,ans2);
    }
    int maxProfit(vector<int>& v, int fee) {
        int n = v.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,n,v,fee,dp,1);
    }
};


*/
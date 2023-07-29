/*
808. Soup Servings
Medium
631
1.7K
Companies

There are two types of soup: type A and type B. Initially, we have n ml of each type of soup. There are four kinds of operations:

    Serve 100 ml of soup A and 0 ml of soup B,
    Serve 75 ml of soup A and 25 ml of soup B,
    Serve 50 ml of soup A and 50 ml of soup B, and
    Serve 25 ml of soup A and 75 ml of soup B.

When we serve some soup, we give it to someone, and we no longer have it. Each turn, we will choose from the four operations with an equal probability 0.25. If the remaining volume of soup is not enough to complete the operation, we will serve as much as possible. We stop once we no longer have some quantity of both types of soup.

Note that we do not have an operation where all 100 ml's of soup B are used first.

Return the probability that soup A will be empty first, plus half the probability that A and B become empty at the same time. Answers within 10-5 of the actual answer will be accepted.

 

Example 1:

Input: n = 50
Output: 0.62500
Explanation: If we choose the first two operations, A will become empty first.
For the third operation, A and B will become empty at the same time.
For the fourth operation, B will become empty first.
So the total probability of A becoming empty first plus half the probability that A and B become empty at the same time, is 0.25 * (1 + 1 + 0.5 + 0) = 0.625.

Example 2:

Input: n = 100
Output: 0.71875

 

Constraints:

    0 <= n <= 109

Accepted
35.9K
Submiss
*/

/*
class Solution {
public:
double operation(int a , int b ,  vector<vector<double>> &dp){
    if(a <= 0 && b <= 0) return 0.5;
    if(b <= 0) return 0;
    if(a <= 0) return 1;
    if(dp[a][b] != -1) return dp[a][b];

    double ans =0;
    ans += operation(a-100,b,dp); 
    ans += operation(a-75,b-25,dp); 
    ans += operation(a-50,b-50,dp); 
    ans += operation(a-25,b-75,dp); 
    return dp[a][b] = ans*0.25;
}
    double soupServings(int n) {
        if(n>5000) return 1;
        vector<vector<double>> dp(n+1,vector<double>(n+1,-1));
        return operation(n,n,dp);

    }
};

*/
/*
712. Minimum ASCII Delete Sum for Two Strings
Medium
3.3K
84
Companies

Given two strings s1 and s2, return the lowest ASCII sum of deleted characters to make two strings equal.

 

Example 1:

Input: s1 = "sea", s2 = "eat"
Output: 231
Explanation: Deleting "s" from "sea" adds the ASCII value of "s" (115) to the sum.
Deleting "t" from "eat" adds 116 to the sum.
At the end, both strings are equal, and 115 + 116 = 231 is the minimum sum possible to achieve this.

Example 2:

Input: s1 = "delete", s2 = "leet"
Output: 403
Explanation: Deleting "dee" from "delete" to turn the string into "let",
adds 100[d] + 101[e] + 101[e] to the sum.
Deleting "e" from "leet" adds 101[e] to the sum.
At the end, both strings are equal to "let", and the answer is 100+101+101+101 = 403.
If instead we turned both strings into "lee" or "eet", we would get answers of 433 or 417, which are higher.

 

Constraints:

    1 <= s1.length, s2.length <= 1000
    s1 and s2 consist of lowercase English letters.


*/
/*
class Solution {
public:
    long long help(int i,int j,string& s1,string &s2,vector<vector<int>>&dp){
        if(i==s1.size() && j==s2.size())return 0;
        if(i==s1.size()){
            int d=0;
            for(int k=j;k<s2.size();k++){
                d += (int)s2[k];
            }
            return d;
        }
        if(j==s2.size()){
            int d=0;
            for(int k=i;k<s1.size();k++){
                d += (int)s1[k];
            }
            return d;
        }
        if(dp[i][j]!=-1)return dp[i][j];
        long long ans = INT_MAX;
        if(s1[i]==s2[j])ans = help(i+1,j+1,s1,s2,dp);
        else {
            ans = min(ans, s1[i] + help(i+1,j,s1,s2,dp));
            ans = min(ans, s2[j] + help(i,j+1,s1,s2,dp));
        }
        return dp[i][j] = ans;
    }
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp(s1.size(),vector<int>(s2.size(),-1));
        return help(0,0,s1,s2,dp);
    }
};

*/
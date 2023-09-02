/*
2707. Extra Characters in a String
Medium
1.4K
64
Companies

You are given a 0-indexed string s and a dictionary of words dictionary. You have to break s into one or more non-overlapping substrings such that each substring is present in dictionary. There may be some extra characters in s which are not present in any of the substrings.

Return the minimum number of extra characters left over if you break up s optimally.

 

Example 1:

Input: s = "leetscode", dictionary = ["leet","code","leetcode"]
Output: 1
Explanation: We can break s in two substrings: "leet" from index 0 to 3 and "code" from index 5 to 8. There is only 1 unused character (at index 4), so we return 1.

Example 2:

Input: s = "sayhelloworld", dictionary = ["hello","world"]
Output: 3
Explanation: We can break s in two substrings: "hello" from index 3 to 7 and "world" from index 8 to 12. The characters at indices 0, 1, 2 are not used in any substring and thus are considered as extra characters. Hence, we return 3.

 

Constraints:

    1 <= s.length <= 50
    1 <= dictionary.length <= 50
    1 <= dictionary[i].length <= 50
    dictionary[i] and s consists of only lowercase English letters
    dictionary contains distinct words



*/
/*
class Solution {
public:
    map<string,int>m;
    int c(int i,string &s,vector<int>&dp){
        if(i>=s.size())return 0;
        int ans=INT_MAX;
        if(dp[i]!=-1)return dp[i];
        ans = 1 + c(i+1,s,dp);
        string k="";
        for(int j=i;j<s.size();j++){
            k+= s[j];
            if(m[k]){
                ans=min(ans,c(j+1,s,dp));
            }
        }
        return dp[i]=ans;
    }
    int minExtraChar(string s, vector<string>& d) {
        for(auto i : d)m[i]++;
        vector<int>dp(s.size(),-1);
        return c(0,s,dp);
    }
};
*/
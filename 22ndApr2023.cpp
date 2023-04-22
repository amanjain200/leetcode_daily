/*
1312. Minimum Insertion Steps to Make a String Palindrome
Hard
3.6K
48
Companies
Given a string s. In one step you can insert any character at any index of the string.

Return the minimum number of steps to make s palindrome.

A Palindrome String is one that reads the same backward as well as forward.

 

Example 1:

Input: s = "zzazz"
Output: 0
Explanation: The string "zzazz" is already palindrome we do not need any insertions.
Example 2:

Input: s = "mbadm"
Output: 2
Explanation: String can be "mbdadbm" or "mdbabdm".
Example 3:

Input: s = "leetcode"
Output: 5
Explanation: Inserting 5 characters the string becomes "leetcodocteel".
 

Constraints:

1 <= s.length <= 500
s consists of lowercase English letters.

*/

/*
class Solution {
public:
    int longestPalindromeSubseq(string& s) {
        int n = s.size();
        vector<int> dp(n), dpPrev(n);

        for (int start = n - 1; start >= 0; --start) {
            dp[start] = 1;
            for (int end = start + 1; end < n; ++end) {
                if (s[start] == s[end]) {
                    dp[end] = dpPrev[end - 1] + 2;
                } else {
                    dp[end] = max(dpPrev[end], dp[end - 1]);
                }
            }
            dpPrev = dp;
        }

        return dp[n - 1];
    }

    int minInsertions(string s) {
        return s.length() - longestPalindromeSubseq(s);
    }
};

*/
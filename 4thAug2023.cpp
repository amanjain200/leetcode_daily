/*

139. Word Break
Medium
15.6K
651
Companies

Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.

Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

Example 1:

Input: s = "leetcode", wordDict = ["leet","code"]
Output: true
Explanation: Return true because "leetcode" can be segmented as "leet code".

Example 2:

Input: s = "applepenapple", wordDict = ["apple","pen"]
Output: true
Explanation: Return true because "applepenapple" can be segmented as "apple pen apple".
Note that you are allowed to reuse a dictionary word.

Example 3:

Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
Output: false

 

Constraints:

    1 <= s.length <= 300
    1 <= wordDict.length <= 1000
    1 <= wordDict[i].length <= 20
    s and wordDict[i] consist of only lowercase English letters.
    All the strings of wordDict are unique.


*/

/*
class Solution {
public:
    bool wordBreak(std::string s, std::vector<std::string>& wordDict) {
        int n = s.size();
        std::vector<bool> dp(n + 1, false);
        dp[0] = true;
        int max_len = 0;
        for (const auto& word : wordDict) {
            max_len = std::max(max_len, static_cast<int>(word.size()));
        }

        for (int i = 1; i <= n; i++) {
            for (int j = i - 1; j >= std::max(i - max_len - 1, 0); j--) {
                if (dp[j] && std::find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }

        return dp[n];
    }
};

*/
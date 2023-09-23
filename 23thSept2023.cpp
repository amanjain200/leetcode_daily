/*
1048. Longest String Chain
Solved
Medium
Topics
Companies
Hint

You are given an array of words where each word consists of lowercase English letters.

wordA is a predecessor of wordB if and only if we can insert exactly one letter anywhere in wordA without changing the order of the other characters to make it equal to wordB.

    For example, "abc" is a predecessor of "abac", while "cba" is not a predecessor of "bcad".

A word chain is a sequence of words [word1, word2, ..., wordk] with k >= 1, where word1 is a predecessor of word2, word2 is a predecessor of word3, and so on. A single word is trivially a word chain with k == 1.

Return the length of the longest possible word chain with words chosen from the given list of words.

 

Example 1:

Input: words = ["a","b","ba","bca","bda","bdca"]
Output: 4
Explanation: One of the longest word chains is ["a","ba","bda","bdca"].

Example 2:

Input: words = ["xbc","pcxbcf","xb","cxbc","pcxbc"]
Output: 5
Explanation: All the words can be put in a word chain ["xb", "xbc", "cxbc", "pcxbc", "pcxbcf"].

Example 3:

Input: words = ["abcd","dbqca"]
Output: 1
Explanation: The trivial word chain ["abcd"] is one of the longest word chains.
["abcd","dbqca"] is not a valid word chain because the ordering of the letters is changed.

 

Constraints:

    1 <= words.length <= 1000
    1 <= words[i].length <= 16
    words[i] only consists of lowercase English letters.



*/
/*
class Solution {
    bool cmp(string s1, string s2){
        if(s1.size()-1 != s2.size()) return false;
        int first=0, second=0, notmatch=0;
        while(first<s1.size() && second<s2.size()){
            if(s1[first] != s2[second]){
                first++;
                notmatch++;
                if(notmatch>1) return false;
            }
            else{
                first++;
                second++;
            }
        }
        return (second==s2.size());
    }

    static bool comp(string s1, string s2){
        return s1.size()<s2.size();
    }
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), comp);
        int n=words.size(), ans=1;
        vector<int> dp(n, 1);
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(cmp(words[i],words[j])){
                    dp[i]=max(dp[i], dp[j]+1);
                    ans=max(ans, dp[i]);
                }
            }
        }
        return ans;
    }
};

*/
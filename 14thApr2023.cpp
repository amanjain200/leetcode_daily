/*
516. Longest Palindromic Subsequence
Medium
7.3K
279
Companies
Given a string s, find the longest palindromic subsequence's length in s.

A subsequence is a sequence that can be derived from another sequence by deleting some or no elements without changing the order of the remaining elements.

 

Example 1:

Input: s = "bbbab"
Output: 4
Explanation: One possible longest palindromic subsequence is "bbbb".
Example 2:

Input: s = "cbbd"
Output: 2
Explanation: One possible longest palindromic subsequence is "bb".
 

Constraints:

1 <= s.length <= 1000
s consists only of lowercase English letters.

*/

/*
class Solution {
public:
    int longestPalindromeSubseq(string s){
        int m = s.size();

        int tab[3][m];
        for(int i = 0; i<m; i++){
            tab[0][i] = 0;
            tab[1][i] = 1;
        }
        int _2, _1, _0;
        for(int gap = 1; gap<m; gap++){
            _2 = (gap+1)%3, _1 = (gap+3)%3, _0 = (gap-1)%3;
            for(int i = 0,j = gap; j<m; i++,j++ ){
                if(s[i] == s[j]){
                    tab[_2][j] = tab[_0][j-1]+2;
                }
                else{
                    tab[_2][j] = max(tab[_1][j],tab[_1][j-1]);
                }
            }   
        }
        return tab[m%3][m-1];
    }
};

*/
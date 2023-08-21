/*
459. Repeated Substring Pattern
Easy
5.4K
448
Companies

Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

Example 1:

Input: s = "abab"
Output: true
Explanation: It is the substring "ab" twice.

Example 2:

Input: s = "aba"
Output: false

Example 3:

Input: s = "abcabcabcabc"
Output: true
Explanation: It is the substring "abc" four times or the substring "abcabc" twice.

 

Constraints:

    1 <= s.length <= 104
    s consists of lowercase English letters.


*/
/*

class Solution {
    bool check(string s, int len){
        string unit = s.substr(0, len+1);
        int ind=len+1;
        while(ind<s.size()){
            int k=0;
            for(int i=ind; i<ind+len+1; i++){
                if(s[i] != unit[k++]) return false;
            }
            ind+=(len+1);
        }
        return true;
    }
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=0; i<n/2; i++){
            if((n%(i+1)==0) && check(s, i)) return true;
        }
        return false;
    }
};
*/
/*
438. Find All Anagrams in a String
Medium
10.2K
296
Companies
Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".
Example 2:

Input: s = "abab", p = "ab"
Output: [0,1,2]
Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".
 

Constraints:

1 <= s.length, p.length <= 3 * 104
s and p consist of lowercase English letters.

*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool areEqual(vector<int> v1, vector<int> v2){
        for(int i=0; i<26; i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> indexes;
        vector<int> smp(26, 0);
        vector<int> pmp(26, 0);

        if(s.size() < p.size()){
            return indexes;
        }

        for(char i: p){
            pmp[i-'a']++;
        }

        int j = 0, i = 0;
        while(j<s.size()){
            smp[s[j]-'a']++;
            if(j-i+1 == p.size()){
                bool ind = areEqual(smp, pmp);
                if(ind){
                    indexes.push_back(i);
                }
            }
            if(j-i+1<p.size()){
                j++;
            }
            else{
                smp[s[i]-'a']--;
                i++;
                j++;
            }
        }

        return indexes;
    }
};

/*
567. Permutation in String
Medium

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

Example 1:

Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").
Example 2:

Input: s1 = "ab", s2 = "eidboaoo"
Output: false
 

Constraints:

1 <= s1.length, s2.length <= 104
s1 and s2 consist of lowercase English letters.
*/


#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool areVectorsEqual(vector<int> a, vector<int> b){
        for(int i=0; i<26; i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()){
            return false;
        }
        vector<int> frequencyS1(26, 0);
        for(char c: s1){
            frequencyS1[c-'a']++;
        }
        
        vector<int> frequencyS2(26, 0);
        int i=0, j=0;
        
        while(j<s2.size()){
            frequencyS2[s2[j]-'a']++;
            
            if(j-i+1==s1.size()){
                if(areVectorsEqual(frequencyS1, frequencyS2)){
                    return true;
                }
            }
            
            if(j-i+1<s1.size()){
                j++;
            }
            else{
                frequencyS2[s2[i]-'a']--;
                i++;
                j++;
            }
        }
        return false;
    }
};



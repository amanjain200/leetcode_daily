/*
472. Concatenated Words
Hard
2.9K
247
Companies
Given an array of strings words (without duplicates), return all the concatenated words in the given list of words.

A concatenated word is defined as a string that is comprised entirely of at least two shorter words in the given array.

 

Example 1:

Input: words = ["cat","cats","catsdogcats","dog","dogcatsdog","hippopotamuses","rat","ratcatdogcat"]
Output: ["catsdogcats","dogcatsdog","ratcatdogcat"]
Explanation: "catsdogcats" can be concatenated by "cats", "dog" and "cats"; 
"dogcatsdog" can be concatenated by "dog", "cats" and "dog"; 
"ratcatdogcat" can be concatenated by "rat", "cat", "dog" and "cat".
Example 2:

Input: words = ["cat","dog","catdog"]
Output: ["catdog"]
 

Constraints:

1 <= words.length <= 104
1 <= words[i].length <= 30
words[i] consists of only lowercase English letters.
All the strings of words are unique.
1 <= sum(words[i].length) <= 105
*/


#include<iostream>
#include<vector>
#include<set>
using namespace std;



class Solution {
public:
    set<string> s;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> concatenatedWords;
        for(string word : words)
            s.insert(word);
        for(string word : words) {
            if(check(word) == true)
                concatenatedWords.push_back(word);
        }
        return concatenatedWords;
    }

    bool check(string word) {
        for(int i = 1; i < word.length(); i++) {
            string prefixWord = word.substr(0, i);
            string suffixWord = word.substr(i, word.length()-i);
            if(s.find(prefixWord) != s.end() && (s.find(suffixWord) != s.end() || check(suffixWord)))
                return true;
        }
        return false;
    }
};
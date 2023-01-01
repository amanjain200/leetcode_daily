/*
WORD PATTERN
Given a pattern and a string s, find if s follows the same pattern.

Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s.

 

Example 1:

Input: pattern = "abba", s = "dog cat cat dog"
Output: true
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"
Output: false
Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"
Output: false
 

Constraints:

1 <= pattern.length <= 300
pattern contains only lower-case English letters.
1 <= s.length <= 3000
s contains only lowercase English letters and spaces ' '.
s does not contain any leading or trailing spaces.
All the words in s are separated by a single space.

*/

#include<iostream>
using namespace std;

/*
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        map<string, char> mp2;
        int n=0, i=0;
        string temp = "";
        while(i <= s.length()){
            if(s[i]==' ' || i==s.length()){
                if(mp.count(pattern[n]) != 0){
                    if(mp[pattern[n]] != temp){
                        return false;
                    }
                }else{
                    if(mp2.count(temp) != 0 || temp==""){
                        return false;
                    }
                    mp[pattern[n]] = temp;
                    mp2[temp] = pattern[n];
                }
                n++;
                temp = "";
            }else{
                temp += s[i];
            }
            i++;
        }
        if(n != pattern.length()){
            return false;
        }

        return true;
    }
};
*/
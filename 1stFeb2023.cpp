/*
1071. Greatest Common Divisor of Strings
Easy
2.6K
412
Companies
For two strings s and t, we say "t divides s" if and only if s = t + ... + t (i.e., t is concatenated with itself one or more times).

Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

 

Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
 

Constraints:

1 <= str1.length, str2.length <= 1000
str1 and str2 consist of English uppercase letters.

*/

#include<iostream>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string ans = "";

        if(str1[0] == str2[0]){
            ans += str1[0];
            int k = 1;
            string temp = ans;
            int minlen = min(str1.size(), str2.size());
            while(k<minlen){
                if(str1[k] == str2[k]){
                    temp+=str1[k];
                }
                k++;
                if(str1.size()%(temp.size())==0 && str2.size()%(temp.size())==0){
                    ans = temp;
                }
            }
            
            bool s1 = true, s2 = true;
            int len = ans.size();
            for(int i=0; i<str1.size(); i++){
                if(str1[i] != ans[i%len]){
                    s1 = false;
                    break;
                }
            }
            for(int i=0; i<str2.size(); i++){
                if(str2[i] != ans[i%len]){
                    s2 = false;
                    break;
                }
            }
            if(s1&&s2) return ans;
            else ans = "";

        }
        else{
            return ans;
        }
        return ans;

    }
};
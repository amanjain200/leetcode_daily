/*
28. Find the Index of the First Occurrence in a String
Medium
2.5K
129
Companies
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 

Example 1:

Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
Example 2:

Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
 

Constraints:

1 <= haystack.length, needle.length <= 104
haystack and needle consist of only lowercase English characters.

*/

#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i]==needle[0]){
                index = i;
                int count = 1;
                for(int j=1; j<needle.size(); j++){
                    if(needle[j]==haystack[i+j]){
                        count++;
                    }
                    else{
                        break;
                    }
                }
                if(count==needle.size()){
                    return i;
                }
                
                
            }
            
            
        }
        
        return -1;
        
    }
};
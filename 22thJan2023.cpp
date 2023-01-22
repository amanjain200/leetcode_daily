/*
131. Palindrome Partitioning
Medium
9.7K
312
Companies
Given a string s, partition s such that every 
substring
 of the partition is a 
palindrome
. Return all possible palindrome partitioning of s.

 

Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
 

Constraints:

1 <= s.length <= 16
s contains only lowercase English letters.


*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;



class Solution {
     bool checkpalindrome(string str, int startIndex, int lastIndex){
        while(startIndex <= lastIndex){
            if(str[startIndex] != str[lastIndex])
                return false;
            startIndex++;
            lastIndex--;
        }
        return true;
    }

    void palindromePartition(int index, vector<string>& ds, vector<vector<string>>& output, string str){
        if(index == str.length()){
            output.push_back(ds);
            return;
        }
        for(int i = index; i < str.length(); i++){
            if(checkpalindrome(str, index, i)){
                ds.push_back(str.substr(index, i - index + 1));
                palindromePartition(i+1, ds, output, str);
                ds.pop_back();
            }
        }
    }


public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> output;
        vector<string> ds;
        palindromePartition(0, ds, output, s);
        return output;
    }
};


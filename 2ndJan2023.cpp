/*
520 DETECT CAPITAL
We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.

 

Example 1:

Input: word = "USA"
Output: true

#include<iostream>
using namespace std;
class Solution {
public:
    //Functions to check
    bool allFalse(vector<bool> v, int len){
            for(int i=0; i<len; i++){
                if (v[i] == false){
                    
                }
                else{
                    return false;
                }
            }
            return true;
        }
        
    bool allTrue(vector<bool> v, int len){
        for(int i=0; i<len; i++){
                if (v[i] == true){
                    
                }
                else{
                    return false;
                }
            }
            return true;
    }
    
    bool firstTrue(vector<bool> v, int len){
        if(v[0] == true){
            for(int i=1; i<len; i++){
                if(v[i] == false){
                    
                }
                else{
                    return false;
                }
            }
            return true;
        }
        else{
            return false;
        }
    }
    
    bool detectCapitalUse(string word) {
        vector<bool> v;
        
        int len = word.length();
        
        for(int i=0; i<len; i++){
            if(word[i] >= 'A' && word[i] <= 'Z'){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        
        
        if(allFalse(v, len)){
            return true;
        }
        else if(allTrue(v, len)){
            return true;
        }
        else if(firstTrue(v, len)){
            return true;
        }
        else{
            return false;
        }
        
    }
};
*/
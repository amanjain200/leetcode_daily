/*
17. Letter Combinations of a Phone Number
Medium
16.3K
875
Companies

Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

Example 2:

Input: digits = ""
Output: []

Example 3:

Input: digits = "2"
Output: ["a","b","c"]

 

Constraints:

    0 <= digits.length <= 4
    digits[i] is a digit in the range ['2', '9'].



*/

/*

class Solution {
    unordered_map<char, std::string> mp = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
};


    vector<string> ans;

    void func(int ind, string digits, string temp) {
    if (ind == digits.size()) {
        ans.push_back(temp);
        return;
    }

    string letters = mp[digits[ind]];
    for (char ch : letters) {
        func(ind + 1, digits, temp + ch);
    }
}

public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return ans;
        func(0,digits,"");
        return ans;
    }
};
*/
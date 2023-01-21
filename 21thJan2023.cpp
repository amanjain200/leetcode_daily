/*
93. Restore IP Addresses
Medium
4.1K
712
Companies
A valid IP address consists of exactly four integers separated by single dots. Each integer is between 0 and 255 (inclusive) and cannot have leading zeros.

For example, "0.1.2.201" and "192.168.1.1" are valid IP addresses, but "0.011.255.245", "192.168.1.312" and "192.168@1.1" are invalid IP addresses.
Given a string s containing only digits, return all possible valid IP addresses that can be formed by inserting dots into s. You are not allowed to reorder or remove any digits in s. You may return the valid IP addresses in any order.

 

Example 1:

Input: s = "25525511135"
Output: ["255.255.11.135","255.255.111.35"]
Example 2:

Input: s = "0000"
Output: ["0.0.0.0"]
Example 3:

Input: s = "101023"
Output: ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]
 

Constraints:

1 <= s.length <= 20
s consists of digits only.


*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool helper(string temp){
        if(temp.size()>3 || temp.size()==0) return false;
        if(temp.size()>1 && temp[0]=='0')   return false;
        if(temp.size() && stoi(temp)>255) return false;
        return true;
    }

    void solve(vector<string>& ans, string output, int ind, string s, int dots){
        if(dots == 3){
            if(helper(s.substr(ind)))
                ans.push_back(output+s.substr(ind));
            return;
        }
        int sz = s.size();
        for(int i=ind;i<min(ind+3, sz);i++){
            if(helper(s.substr(ind, i-ind+1))){
                output.push_back(s[i]);
                output.push_back('.');
                solve(ans, output, i+1, s, dots+1);
                output.pop_back();
            }
        }

    }



    vector<string> restoreIpAddresses(string s) {
        vector<string> answer;
        string res;
        solve(answer, res, 0, s, 0);
        return answer;
    }
};









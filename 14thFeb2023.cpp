/*
67. Add Binary
Easy
7.2K
727
Companies
Given two binary strings a and b, return their sum as a binary string.

 

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.

*/

#include<iostream>
#include<string>
using namespace std;

class Solution {

public:
    string addBinary(string a, string b) {
        string ans = "";
        char carry = '0';
        int len = max(a.size(), b.size());
        if(a.size()<len){
            while(a.size() != len){
                a='0'+a;
            }
        }
        else if(b.size()<len){
            while(b.size() != len){
                b='0'+b;
            }
        }

        for(int i=len-1; i>=0; i--){
            int a1 = a[i] - '0';
            int b1 = b[i] - '0';
            int car = carry - '0';
            int s = a1+b1+car;
            if(s==0){
                ans='0'+ans;
                carry = '0';
            }
            else if(s==1){
                ans='1'+ans;
                carry = '0';
            }
            else if(s==2){
                ans='0'+ans;
                carry = '1';
            }
            else if(s==3){
                ans='1'+ans;
                carry = '1';
            }
        }
        if(carry == '1'){
            ans='1'+ans;
        }
        return ans;
    }
};
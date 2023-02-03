/*
6. Zigzag Conversion
Medium
5.4K
11.3K
Companies
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
Example 2:

Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
Example 3:

Input: s = "A", numRows = 1
Output: "A"
 

Constraints:

1 <= s.length <= 1000
s consists of English letters (lower-case and upper-case), ',' and '.'.
1 <= numRows <= 1000

*/


#include<iostream>
#include<vector>
using namespace std;
/*
class Solution {
public:
    string convert(string s, int numRows) {
    if(numRows<2) return s;
    int t[numRows][s.size()];
    memset(t,-1, sizeof(t));
    string answer;

        for(int i=0, changer=1, row=0; i<s.size(); i++){
            
            t[row][i]= s[i];
            if(row==numRows-1) changer =-1;
            if(row==0) changer=1;
            row= row+ changer;

        }

       for(int i=0; i<numRows; i++){
           for(int j=0; j<s.size();j++){
               if(t[i][j]!=-1)answer.push_back(t[i][j]);
           }
       }

    return answer;

    }
};*/
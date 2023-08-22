/*
168. Excel Sheet Column Title
Easy
4.7K
647
Companies

Given an integer columnNumber, return its corresponding column title as it appears in an Excel sheet.

For example:

A -> 1
B -> 2
C -> 3
...
Z -> 26
AA -> 27
AB -> 28 
...

 

Example 1:

Input: columnNumber = 1
Output: "A"

Example 2:

Input: columnNumber = 28
Output: "AB"

Example 3:

Input: columnNumber = 701
Output: "ZY"

 

Constraints:

    1 <= columnNumber <= 231 - 1


*/
/*
class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char> vec = {'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
        string ans = "";
        int n=columnNumber;
        while(n>0){
            long long a = n%26;
            ans = vec[a] + ans;
            if(a==0) n=n/26 -1;
            else n=n/26;
        }
        return ans;
    }
};
*/
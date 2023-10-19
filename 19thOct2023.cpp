/*
844. Backspace String Compare
Solved
Easy
Topics
Companies

Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:

Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:

Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".

 

Constraints:

    1 <= s.length, t.length <= 200
    s and t only contain lowercase letters and '#' characters.

 

Follow up: Can you solve it in O(n) time and O(1) space?

*/
/*


class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k = processString(s);
        int p = processString(t);

        if (k != p) return false;

        for (int i = 0; i < k; i++) {
            if (s[i] != t[i]) return false;
        }

        return true;
    }

private:
    int processString(string& str) {
        int k = 0;
        for (char c : str) {
            if (c != '#') {
                str[k++] = c;
            } else if (k > 0) {
                k--;
            }
        }
        return k;
    }
};*/
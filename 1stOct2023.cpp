/*
557. Reverse Words in a String III
Solved
Easy
Topics
Companies

Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

 

Example 1:

Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Example 2:

Input: s = "God Ding"
Output: "doG gniD"

 

Constraints:

    1 <= s.length <= 5 * 104
    s contains printable ASCII characters.
    s does not contain any leading or trailing spaces.
    There is at least one word in s.
    All the words in s are separated by a single space.


*/
/*
class Solution {
public:
    string reverseWords(string s) {
        int l=0, r=s.size()-1;

        while(l<s.size()){
            int r=l;
            while(r<s.size() && s[r]!=' ') r++;
            r--;
            int temp=r+2;
            while(l<r){
                swap(s[l],s[r]);
                l++; r--;
            }
            l=temp;
        }
        return s;

    }
};
*/
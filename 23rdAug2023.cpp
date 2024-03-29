/*
767. Reorganize String
Medium
7.5K
225
Companies

Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.

Return any possible rearrangement of s or return "" if not possible.

 

Example 1:

Input: s = "aab"
Output: "aba"

Example 2:

Input: s = "aaab"
Output: ""

 

Constraints:

    1 <= s.length <= 500
    s consists of lowercase English letters.


*/
/*
class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> freq_map;
        for (char c : s) {
            freq_map[c]++;
        }

        priority_queue<pair<int, char>> max_heap;
        for (auto &[ch, freq] : freq_map) {
            max_heap.push({freq, ch});
        }

        string res;
        while (max_heap.size() >= 2) {
            auto [freq1, char1] = max_heap.top(); max_heap.pop();
            auto [freq2, char2] = max_heap.top(); max_heap.pop();

            res += char1;
            res += char2;

            if (--freq1 > 0) max_heap.push({freq1, char1});
            if (--freq2 > 0) max_heap.push({freq2, char2});
        }

        if (!max_heap.empty()) {
            auto [freq, ch] = max_heap.top();
            if (freq > 1) return "";
            res += ch;
        }

        return res;
    }
};

*/
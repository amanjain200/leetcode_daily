/*
839. Similar String Groups
Hard
1.6K
189
Companies
Two strings X and Y are similar if we can swap two letters (in different positions) of X, so that it equals Y. Also two strings X and Y are similar if they are equal.

For example, "tars" and "rats" are similar (swapping at positions 0 and 2), and "rats" and "arts" are similar, but "star" is not similar to "tars", "rats", or "arts".

Together, these form two connected groups by similarity: {"tars", "rats", "arts"} and {"star"}.  Notice that "tars" and "arts" are in the same group even though they are not similar.  Formally, each group is such that a word is in the group if and only if it is similar to at least one other word in the group.

We are given a list strs of strings where every string in strs is an anagram of every other string in strs. How many groups are there?

 

Example 1:

Input: strs = ["tars","rats","arts","star"]
Output: 2
Example 2:

Input: strs = ["omv","ovm"]
Output: 1
 

Constraints:

1 <= strs.length <= 300
1 <= strs[i].length <= 300
strs[i] consists of lowercase letters only.
All words in strs have the same length and are anagrams of each other.

*/

/*
class Solution {
public:
    int numSimilarGroups(vector<string>& strs) {
        int groups = 0, n = strs.size();
        vector<bool> vis(n, false);
        for(int i=0;i<strs.size();i++){
            if(vis[i]) continue;
            groups++;
            dfs(i, strs, vis);
        }
        return groups;
    }

    void dfs(int i, vector<string>& strs, vector<bool>& vis){
        vis[i] = true;
        for(int j=0;j<strs.size();j++){
            if(vis[j]) continue;
            if(is_similar(strs[i], strs[j])){
                dfs(j, strs, vis);
            }
        }
    }

    bool is_similar(string a, string b){
        int count=0;
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[i]) count++;
        }
        return (count == 2 || count == 0);
    }

};
*/
/*

46. Permutations
Medium
17K
272
Companies

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]

Example 3:

Input: nums = [1]
Output: [[1]]

 

Constraints:

    1 <= nums.length <= 6
    -10 <= nums[i] <= 10
    All the integers of nums are unique.


*/

/*


class Solution {
    void helper(set<vector<int>>& st, vector<int> &temp, int index, int siz){
        if(index >= siz) return;

        st.insert(temp);

        for(int i=0; i<siz; i++){
            swap(temp[i], temp[index]);
            helper(st, temp, index+1, siz);
            swap(temp[i], temp[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        set<vector<int>> st;
        vector<vector<int>> ans;
        vector<int> temp = nums;
        helper(st, temp, 0, nums.size());
        for(auto it : st) ans.push_back(it);
        return ans;
    }
};*/
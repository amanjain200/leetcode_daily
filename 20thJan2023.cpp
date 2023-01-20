/*
491. Non-decreasing Subsequences
Medium

Given an integer array nums, return all the different possible non-decreasing subsequences of the given array with at least two elements. You may return the answer in any order.

 

Example 1:

Input: nums = [4,6,7,7]
Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]
Example 2:

Input: nums = [4,4,3,2,1]
Output: [[4,4]]
 

Constraints:

1 <= nums.length <= 15
-100 <= nums[i] <= 100
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;



class Solution {
public:
    void func(set<vector<int>>& ans, vector<int>& nums, vector<int>& temp, int i){
        //recursively find all the subsequences
        if(i>=nums.size()){
            if(temp.size()>=2){
                ans.insert(temp);
            }
            return;
        }
        if(temp.size()==0 || nums[i] >= temp.back()){
            temp.push_back(nums[i]);
            func(ans, nums, temp, i+1);
            temp.pop_back();
        }
            func(ans, nums, temp, i+1);
    }


    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;

        vector<int> temp;
        
        func(ans, nums, temp, 0);
        


        return vector(ans.begin(), ans.end());
    }
};
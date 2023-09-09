/*
377. Combination Sum IV
Medium
6.8K
622
Companies

Given an array of distinct integers nums and a target integer target, return the number of possible combinations that add up to target.

The test cases are generated so that the answer can fit in a 32-bit integer.

 

Example 1:

Input: nums = [1,2,3], target = 4
Output: 7
Explanation:
The possible combination ways are:
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
Note that different sequences are counted as different combinations.

Example 2:

Input: nums = [9], target = 3
Output: 0

 

Constraints:

    1 <= nums.length <= 200
    1 <= nums[i] <= 1000
    All the elements of nums are unique.
    1 <= target <= 1000

 

Follow up: What if negative numbers are allowed in the given array? How does it change the problem? What limitation we need to add to the question to allow negative numbers?

*/
/*
class Solution {
public:
    int help(vector<int>& nums, int target,int ind,vector<vector<int>>&dp) {     
           if(target==0) return 1;
           if(ind==nums.size()){
               return 0;
           }
           if(dp[ind][target]!=-1) return dp[ind][target];
           int pick=0;
           if(nums[ind]<=target){
            pick=help(nums,target-nums[ind],0,dp);

           }
           int notpick=help(nums,target,ind+1,dp);

           return  dp[ind][target]=pick+notpick;
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<vector<int>>dp(201,vector<int>(1001,-1));
        return help(nums,target,0,dp);
    }
};

*/
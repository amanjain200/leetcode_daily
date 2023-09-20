/*
1658. Minimum Operations to Reduce X to Zero
Solved
Medium
Topics
Companies
Hint

You are given an integer array nums and an integer x. In one operation, you can either remove the leftmost or the rightmost element from the array nums and subtract its value from x. Note that this modifies the array for future operations.

Return the minimum number of operations to reduce x to exactly 0 if it is possible, otherwise, return -1.

 

Example 1:

Input: nums = [1,1,4,2,3], x = 5
Output: 2
Explanation: The optimal solution is to remove the last two elements to reduce x to zero.

Example 2:

Input: nums = [5,6,7,8,9], x = 4
Output: -1

Example 3:

Input: nums = [3,2,20,1,1,3], x = 10
Output: 5
Explanation: The optimal solution is to remove the last three elements and the first two elements (5 operations in total) to reduce x to zero.

 

Constraints:

    1 <= nums.length <= 105
    1 <= nums[i] <= 104
    1 <= x <= 109



*/

/*
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = 0, n = nums.size();
        for (int num : nums) target += num;
        target -= x;
        
        if (target == 0) return n;
        
        int max_len = 0, cur_sum = 0, left = 0;
        
        for (int right = 0; right < n; ++right) {
            cur_sum += nums[right];
            while (left <= right && cur_sum > target) {
                cur_sum -= nums[left];
                left++;
            }
            if (cur_sum == target) {
                max_len = max(max_len, right - left + 1);
            }
        }
        
        return max_len ? n - max_len : -1;
    }
};


*/
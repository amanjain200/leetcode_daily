/*
2009. Minimum Number of Operations to Make Array Continuous
Solved
Hard
Topics
Companies
Hint

You are given an integer array nums. In one operation, you can replace any element in nums with any integer.

nums is considered continuous if both of the following conditions are fulfilled:

    All elements in nums are unique.
    The difference between the maximum element and the minimum element in nums equals nums.length - 1.

For example, nums = [4, 2, 5, 3] is continuous, but nums = [1, 2, 3, 5, 6] is not continuous.

Return the minimum number of operations to make nums continuous.

 

Example 1:

Input: nums = [4,2,5,3]
Output: 0
Explanation: nums is already continuous.

Example 2:

Input: nums = [1,2,3,5,6]
Output: 1
Explanation: One possible solution is to change the last element to 4.
The resulting array is [1,2,3,5,4], which is continuous.

Example 3:

Input: nums = [1,10,100,1000]
Output: 3
Explanation: One possible solution is to:
- Change the second element to 2.
- Change the third element to 3.
- Change the fourth element to 4.
The resulting array is [1,2,3,4], which is continuous.

 

Constraints:

    1 <= nums.length <= 105
    1 <= nums[i] <= 109



*/
/*
class Solution {
public:
    int minOperations(vector<int>& nums) {
        // Sort the vector in ascending order
        sort(nums.begin(), nums.end());

        // Initialize variables
        int n = nums.size(); // Number of elements in the vector
        int left = 0; // Left pointer for the sliding window
        int maxCount = 1; // Initialize the maximum count of distinct elements
        int currentCount = 1; // Initialize the count of distinct elements in the current window

        // Iterate through the vector to find the minimum operations
        for (int right = 1; right < n; ++right) {
            // Check if the current element is equal to the previous one
            if (nums[right] == nums[right - 1]) {
                continue; // Skip duplicates
            }

            // Check if the current window size is less than or equal to the difference between the maximum and minimum values
            while (nums[right] - nums[left] > n - 1) {
                // Move the left pointer to shrink the window
                if(left<n && nums[left+1]==nums[left]){
currentCount++;
}
                left++;
                currentCount--;
            }

            // Update the count of distinct elements in the current window
            currentCount++;

            // Update the maximum count
            maxCount = max(maxCount, currentCount);
        }

        // Calculate the minimum operations
        int minOps = n - maxCount;

        return minOps;
    }
};

*/
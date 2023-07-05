/*
1493. Longest Subarray of 1's After Deleting One Element
Medium
2.7K
48
Companies

Given a binary array nums, you should delete one element from it.

Return the size of the longest non-empty subarray containing only 1's in the resulting array. Return 0 if there is no such subarray.

 

Example 1:

Input: nums = [1,1,0,1]
Output: 3
Explanation: After deleting the number in position 2, [1,1,1] contains 3 numbers with value of 1's.

Example 2:

Input: nums = [0,1,1,1,0,1,1,0,1]
Output: 5
Explanation: After deleting the number in position 4, [0,1,1,1,1,1,0,1] longest subarray with value of 1's is [1,1,1,1,1].

Example 3:

Input: nums = [1,1,1]
Output: 2
Explanation: You must delete one element.

 

Constraints:

    1 <= nums.length <= 105
    nums[i] is either 0 or 1.


*/
/*

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0, right=0, ans=0, n=nums.size(), flip=1;
        while(right < n){
            //if it is 0, delete this 0
            if(nums[right]==0) flip--;
            //if deletion is >1
            if(flip < 0){
                //move left pointer to next 1 after a 0
                while(nums[left++] != 0){};
                //now deletion count is 1 only
                flip++;
            }
            //update ans
            ans=max(ans, right-left);
            //move right
            right++;
        }
        return ans;
    }
};
*/
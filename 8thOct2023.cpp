/*
1458. Max Dot Product of Two Subsequences
Solved
Hard
Topics
Companies
Hint

Given two arrays nums1 and nums2.

Return the maximum dot product between non-empty subsequences of nums1 and nums2 with the same length.

A subsequence of a array is a new array which is formed from the original array by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (ie, [2,3,5] is a subsequence of [1,2,3,4,5] while [1,5,3] is not).

 

Example 1:

Input: nums1 = [2,1,-2,5], nums2 = [3,0,-6]
Output: 18
Explanation: Take subsequence [2,-2] from nums1 and subsequence [3,-6] from nums2.
Their dot product is (2*3 + (-2)*(-6)) = 18.

Example 2:

Input: nums1 = [3,-2], nums2 = [2,-6,7]
Output: 21
Explanation: Take subsequence [3] from nums1 and subsequence [7] from nums2.
Their dot product is (3*7) = 21.

Example 3:

Input: nums1 = [-1,-1], nums2 = [1,1]
Output: -1
Explanation: Take subsequence [-1] from nums1 and subsequence [1] from nums2.
Their dot product is -1.

 

Constraints:

    1 <= nums1.length, nums2.length <= 500
    -1000 <= nums1[i], nums2[i] <= 1000


*/
/*
class Solution {
    int dp[501][501];

    int func(int ind1, int ind2, vector<int>& nums1, vector<int>& nums2){
        //base case
        if(ind1 >= nums1.size() || ind2 >= nums2.size()) return 0;

        if(dp[ind1][ind2] != -1) return dp[ind1][ind2];

        //not take
        int nt = func(ind1+1, ind2, nums1, nums2);

        //take
        int t=0;
        for(int i=ind2; i<nums2.size(); i++){
            t = max(t, nums1[ind1]*nums2[i] + func(ind1+1, i+1, nums1, nums2));
        }
        return dp[ind1][ind2] = max(t,nt);
    }
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp, -1, sizeof(dp));
        int ans = func(0, 0, nums1, nums2);
        if(ans==0){
            int maxi1=-1e9, maxi2=-1e9;
            int mini1=1e9, mini2=1e9;
            for(auto it : nums1){
                maxi1=max(maxi1, it);
                mini1=min(mini1, it);
            } 
            for(auto it  : nums2){
                maxi2=max(maxi2, it);
                mini2=min(mini2, it);
            } 
            return max(maxi1*maxi2, max(mini1*maxi2, max(maxi1*mini2, mini1*mini2)));
        }
        return ans;

    }
};

*/
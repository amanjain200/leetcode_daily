/*
673. Number of Longest Increasing Subsequence
Medium
5.8K
235
Companies

Given an integer array nums, return the number of longest increasing subsequences.

Notice that the sequence has to be strictly increasing.

 

Example 1:

Input: nums = [1,3,5,4,7]
Output: 2
Explanation: The two longest increasing subsequences are [1, 3, 4, 7] and [1, 3, 5, 7].

Example 2:

Input: nums = [2,2,2,2,2]
Output: 5
Explanation: The length of the longest increasing subsequence is 1, and there are 5 increasing subsequences of length 1, so output 5.

 

Constraints:

    1 <= nums.length <= 2000
    -106 <= nums[i] <= 106


*/
/*
class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> len(nums.size(), 1);
        vector<int> freq(nums.size(), 1);

        for(int i=1; i<nums.size(); i++){
            for(int j=i-1; j>=0; j--){
                if(nums[j]<nums[i]){
                    if(len[j]+1 > len[i]){
                        len[i] = len[j]+1;
                        freq[i] = freq[j];
                    }else if(len[j]+1 == len[i]){
                        freq[i]+=freq[j];
                    }
                }
            }
        }

        int maxi=0;
        for(int i=0; i<nums.size(); i++){
            if(len[i]>maxi){
                maxi=len[i];
            }
        }

        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(len[i]==maxi) ans+=freq[i];
        }

        return ans;
    }
};

*/
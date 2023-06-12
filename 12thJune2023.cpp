/*
228. Summary Ranges
Easy
2.8K
1.5K
Companies

You are given a sorted unique integer array nums.

A range [a,b] is the set of all integers from a to b (inclusive).

Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.

Each range [a,b] in the list should be output as:

    "a->b" if a != b
    "a" if a == b

 

Example 1:

Input: nums = [0,1,2,4,5,7]
Output: ["0->2","4->5","7"]
Explanation: The ranges are:
[0,2] --> "0->2"
[4,5] --> "4->5"
[7,7] --> "7"

Example 2:

Input: nums = [0,2,3,4,6,8,9]
Output: ["0","2->4","6","8->9"]
Explanation: The ranges are:
[0,0] --> "0"
[2,4] --> "2->4"
[6,6] --> "6"
[8,9] --> "8->9"

 

Constraints:

    0 <= nums.length <= 20
    -231 <= nums[i] <= 231 - 1
    All the values of nums are unique.
    nums is sorted in ascending order.


*/

/*
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0) return {};
        double i=0, j=0;
        string res = "";
        vector<string> ans;
        while(j<nums.size()){
            if(j+1<nums.size() && nums[j+1] ==nums[j]+ 1){
                j++;
            }
            else{
                if(i==j){
                    res+=to_string(nums[i]);
                }
                else{
                    res+=to_string(nums[i]);
                    res+="->";
                    res+=to_string(nums[j]);
                }
                j++;
                i=j;
                ans.push_back(res);
                res="";
            }
        }
        return ans;
    }
};

*/
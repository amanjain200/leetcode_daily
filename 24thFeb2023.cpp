/*
1675. Minimize Deviation in Array
Hard
2.3K
118
Companies
You are given an array nums of n positive integers.

You can perform two types of operations on any element of the array any number of times:

If the element is even, divide it by 2.
For example, if the array is [1,2,3,4], then you can do this operation on the last element, and the array will be [1,2,3,2].
If the element is odd, multiply it by 2.
For example, if the array is [1,2,3,4], then you can do this operation on the first element, and the array will be [2,2,3,4].
The deviation of the array is the maximum difference between any two elements in the array.

Return the minimum deviation the array can have after performing some number of operations.

 

Example 1:

Input: nums = [1,2,3,4]
Output: 1
Explanation: You can transform the array to [1,2,3,2], then to [2,2,3,2], then the deviation will be 3 - 2 = 1.
Example 2:

Input: nums = [4,1,5,20,3]
Output: 3
Explanation: You can transform the array after two operations to [4,2,5,5,3], then the deviation will be 5 - 2 = 3.
Example 3:

Input: nums = [2,10,8]
Output: 3
 

Constraints:

n == nums.length
2 <= n <= 5 * 104
1 <= nums[i] <= 109
*/

/*
class Solution {
public:
    int minimumDeviation(vector<int>& a) {
        int n = a.size(); 
            int mn = INT_MAX;  
            for (int i = 0 ; i<n ; i++) {
                  if (a[i] & 1) a[i] *= 2;
                  mn = min(mn, a[i]);
            }  
            for (int i = n - 1 ; i>= 0; i--) {
                  while (a[i] % 2 == 0 and a[i]/2 >= mn) a[i] >>= 1;
            }
            sort(a.begin(), a.end()); 
            int ans = a[n - 1] - a[0]; 
            int i = n - 1; 
            while (a[i] % 2 == 0) { 
                  a[i] /= 2;
                  ans = min(ans, a[(i - 1 + n) % n] - a[i]); 
                  i = (i - 1 + n) % n;
            } 
            return (int)ans; 
    }
};
*/
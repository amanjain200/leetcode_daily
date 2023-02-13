/*
1523. Count Odd Numbers in an Interval Range
Easy
1.6K
101
Companies
Given two non-negative integers low and high. Return the count of odd numbers between low and high (inclusive).

 

Example 1:

Input: low = 3, high = 7
Output: 3
Explanation: The odd numbers between 3 and 7 are [3,5,7].
Example 2:

Input: low = 8, high = 10
Output: 1
Explanation: The odd numbers between 8 and 10 are [9].
 

Constraints:

0 <= low <= high <= 10^9

*/


#include<iostream>
using namespace std;

class Solution {
public:
    int countOdds(int low, int high) {
        if(high == low) return low%2;
        else if(high - low == 1) return 1;
        else if(low%2 == 0) low++;
        return (high-low)/2 + 1;;
    }
};

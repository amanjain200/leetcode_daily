/*
77. Combinations
Medium
7.1K
202
Companies

Given two integers n and k, return all possible combinations of k numbers chosen from the range [1, n].

You may return the answer in any order.

 

Example 1:

Input: n = 4, k = 2
Output: [[1,2],[1,3],[1,4],[2,3],[2,4],[3,4]]
Explanation: There are 4 choose 2 = 6 total combinations.
Note that combinations are unordered, i.e., [1,2] and [2,1] are considered to be the same combination.

Example 2:

Input: n = 1, k = 1
Output: [[1]]
Explanation: There is 1 choose 1 = 1 total combination.

 

Constraints:

    1 <= n <= 20
    1 <= k <= n


*/
/*
class Solution {
    vector<vector<int>> ans;
    void func(int index, int n, int k, vector<int> &temp){
        if(k==0){
            ans.push_back(temp);
            return;
        }

        if(index==n) return;


        //take
        temp.push_back(index+1);
        func(index+1, n, k-1, temp);
        temp.pop_back();

        //not take
        func(index+1, n, k, temp);

    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        func(0, n, k, temp);
        return ans;
    }
};

*/
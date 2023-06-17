/*
1187. Make Array Strictly Increasing
Hard
1.6K
29
Companies

Given two integer arrays arr1 and arr2, return the minimum number of operations (possibly zero) needed to make arr1 strictly increasing.

In one operation, you can choose two indices 0 <= i < arr1.length and 0 <= j < arr2.length and do the assignment arr1[i] = arr2[j].

If there is no way to make arr1 strictly increasing, return -1.

 

Example 1:

Input: arr1 = [1,5,3,6,7], arr2 = [1,3,2,4]
Output: 1
Explanation: Replace 5 with 2, then arr1 = [1, 2, 3, 6, 7].

Example 2:

Input: arr1 = [1,5,3,6,7], arr2 = [4,3,1]
Output: 2
Explanation: Replace 5 with 3 and then replace 3 with 4. arr1 = [1, 3, 4, 6, 7].

Example 3:

Input: arr1 = [1,5,3,6,7], arr2 = [1,6,3,3]
Output: -1
Explanation: You can't make arr1 strictly increasing.

 

Constraints:

    1 <= arr1.length, arr2.length <= 2000
    0 <= arr1[i], arr2[i] <= 10^9


*/

/*
class Solution {
public:
    int c(int i,int prev,vector<int>&arr1,vector<int>&arr2,vector<unordered_map<int,int>>&dp){
        if(i>=arr1.size())return 0;
        if(dp[i].find(prev)!=dp[i].end())return dp[i][prev];
        int r1=INT_MAX,r2=INT_MAX;
        if(arr1[i]>prev){
            r1=c(i+1,arr1[i],arr1,arr2,dp);
        }
        int in=upper_bound(arr2.begin(),arr2.end(),prev)-arr2.begin();
        if(in!=arr2.size()){
            r2=c(i+1,arr2[in],arr1,arr2,dp);
        }
        if(r2==INT_MAX){
            return dp[i][prev]=r1;
        }
        else return dp[i][prev]=min(r1,r2+1);
    }
    int makeArrayIncreasing(vector<int>& arr1, vector<int>& arr2) {
        sort(arr2.begin(),arr2.end());
         vector<unordered_map<int,int>>dp(2020);
            int val=c(0,INT_MIN,arr1,arr2,dp); 
            if(val==INT_MAX)return -1;
            else return val;    
    }
};


*/
/*
989. Add to Array-Form of Integer
Easy
2.5K
219
Companies
The array-form of an integer num is an array representing its digits in left to right order.

For example, for num = 1321, the array form is [1,3,2,1].
Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

 

Example 1:

Input: num = [1,2,0,0], k = 34
Output: [1,2,3,4]
Explanation: 1200 + 34 = 1234
Example 2:

Input: num = [2,7,4], k = 181
Output: [4,5,5]
Explanation: 274 + 181 = 455
Example 3:

Input: num = [2,1,5], k = 806
Output: [1,0,2,1]
Explanation: 215 + 806 = 1021
 

Constraints:

1 <= num.length <= 104
0 <= num[i] <= 9
num does not contain any leading zeros except for the zero itself.
1 <= k <= 104

*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        //put k in a vector
        vector<int> num1;
        int siz = num.size();

        vector<int> ans;
        int carry =0;
        int ind = 0;
        
        vector<int> num2;
        while(k>0){
            num2.push_back(k%10);
            k/=10;
        }

        if(num.size()>num2.size()){
            while(num2.size() != num.size()){
                num2.push_back(0);
            }
        }
        else if(num.size()<num2.size()){
            for(int i=num.size()-1; i>=0; i--){
                num1.push_back(num[i]);
            }
            //reverse(num.begin(), num.end());
            while(num2.size() != num1.size()){
                num1.push_back(0);
            }
            reverse(num1.begin(), num1.end());
            while(ind < num2.size()){
            int sm = num2[ind] + num1[num1.size()-1-ind] + carry;
            if(sm>=10){
                int newsm = sm%10;
                carry = sm/10;
                ans.push_back(newsm);
            }
            else{
                ans.push_back(sm);
                carry = 0;
            }
            ind++;
        }
        if(carry != 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
        }
        

        while(ind < siz){
            int sm = num2[ind] + num[num.size()-1-ind] + carry;
            if(sm>=10){
                int newsm = sm%10;
                carry = sm/10;
                ans.push_back(newsm);
            }
            else{
                ans.push_back(sm);
                carry = 0;
            }
            ind++;
        }
        if(carry != 0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
/*
2244. Minimum Rounds to Complete All Tasks

You are given a 0-indexed integer array tasks, where tasks[i] represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.

Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete all the tasks.

 

Example 1:

Input: tasks = [2,2,3,3,2,4,4,4,4,4]
Output: 4
Explanation: To complete all the tasks, a possible plan is:
- In the first round, you complete 3 tasks of difficulty level 2. 
- In the second round, you complete 2 tasks of difficulty level 3. 
- In the third round, you complete 3 tasks of difficulty level 4. 
- In the fourth round, you complete 2 tasks of difficulty level 4.  
It can be shown that all the tasks cannot be completed in fewer than 4 rounds, so the answer is 4.
*/

#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> mp;

        int count = 0;

        for(int i=0; i<tasks.size(); i++){
            mp[tasks[i]]++;
        }

        for(auto i : mp){
            int a = i.second;
            if(a%3 == 0){
                count+=a/3;
            }
            else if(a-2>0 && (a-2)%3 == 0){
                count+=(a-2)/3 + 1;

            }
            else if(a-4>0 && (a-4)%3 == 0){
                count+=(a-4)/3 + 2;
            }
            else if(a-3>0 && (a-3)%2 == 0){
                count+=(a-3)/2 + 1;
            }
            else if(a%2 == 0){
                count+=a/2;
            }
            else{
                return -1;
            }
        }

        return count;

    }
};

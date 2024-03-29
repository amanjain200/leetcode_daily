/*
135. Candy
Solved
Hard
Topics
Companies

There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

    Each child must have at least one candy.
    Children with a higher rating get more candies than their neighbors.

Return the minimum number of candies you need to have to distribute the candies to the children.

 

Example 1:

Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

Example 2:

Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.

 

Constraints:

    n == ratings.length
    1 <= n <= 2 * 104
    0 <= ratings[i] <= 2 * 104



*/
/*
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size(); // Get the number of children
        
        vector<int> candies(n, 1); // Initialize a vector to store the number of candies for each child
        
        // First pass: Check ratings from left to right
        for(int i = 1; i < n; i++){
            if(ratings[i - 1] < ratings[i] && candies[i - 1] >= candies[i]){
                // If the current child has a higher rating and fewer or equal candies than the previous child,
                // give them one more candy than the previous child
                candies[i] = candies[i - 1] + 1;
            }
        }
        
        // Second pass: Check ratings from right to left
        for(int i = n - 2; i >= 0; i--){
            if(ratings[i + 1] < ratings[i] && candies[i + 1] >= candies[i]){
                // If the current child has a higher rating and fewer or equal candies than the next child,
                // give them one more candy than the next child
                candies[i] = candies[i + 1] + 1;
            }
        }
        
        int totalCandies = 0;
        
        // Calculate the total number of candies needed
        for(int i = 0; i < n; i++){
            totalCandies += candies[i];
        }
        
        return totalCandies;
    }
};

*/
/*
74. Search a 2D Matrix
Medium
13.8K
371
Companies

You are given an m x n integer matrix matrix with the following two properties:

    Each row is sorted in non-decreasing order.
    The first integer of each row is greater than the last integer of the previous row.

Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Example 2:

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

 

Constraints:

    m == matrix.length
    n == matrix[i].length
    1 <= m, n <= 100
    -104 <= matrix[i][j], target <= 104


*/
/*

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Linear Search in Row as well as Column
        
        int column = matrix[0].size();
        int row = matrix.size();
        
        //cout<<row<<" "<<column;
        bool found = false;
        
        int tar_row = 0;
        
        
        //Finding the target row
        for(int i=0; i<row; i++){
            if(matrix[i][column - 1] > target){
                tar_row = i;
                break;
            }
            else if(matrix[i][column - 1] == target){
                found = true;
                //return true;
                break;
            }
            else if(matrix[i][column - 1] <target){
                continue;
            }
            return false;
        }
        
        //Finding the target Column
        if(found == false){
        for(int i=0; i<column-1; i++){
            if(matrix[tar_row][i] == target){
                found = true;
                //return true;
            }
        }
        }
        return found;
    }     
};*/
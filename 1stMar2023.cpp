/*
912. Sort an Array
Medium
4.1K
648
Companies
Given an array of integers nums, sort the array in ascending order and return it.

You must solve the problem without using any built-in functions in O(nlog(n)) time complexity and with the smallest space complexity possible.

 

Example 1:

Input: nums = [5,2,3,1]
Output: [1,2,3,5]
Explanation: After sorting the array, the positions of some numbers are not changed (for example, 2 and 3), while the positions of other numbers are changed (for example, 1 and 5).
Example 2:

Input: nums = [5,1,1,2,0,0]
Output: [0,0,1,1,2,5]
Explanation: Note that the values of nums are not necessairly unique.
 

Constraints:

1 <= nums.length <= 5 * 104
-5 * 104 <= nums[i] <= 5 * 104


*/

#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
void merge(vector<int> &arr, int s, int e){
    int mid = s+(e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;
    int* a1 = new int[len1];
    int* a2 = new int[len2];
    
    
    int mainArrayIndex = s;
    
    //copy values of arr into a1 and a2
    for(int i=0; i<len1; i++){
        a1[i] = arr[mainArrayIndex++];
    }
    for(int i=0; i<len2; i++){
        a2[i] = arr[mainArrayIndex++];
    }
    
    //merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    
    while(index1<len1 && index2<len2){
        if(a1[index1]<a2[index2]){
            arr[mainArrayIndex++] = a1[index1++]; 
        }
        else{
            arr[mainArrayIndex++] = a2[index2++];
        }
    }
    while(index1 < len1){
        arr[mainArrayIndex++] = a1[index1++]; 
    }
    while(index2 < len2){
        arr[mainArrayIndex++] = a2[index2++]; 
    }
    
    delete[] a1;
    delete[] a2;

}

void mergeSort(vector<int> &arr, int s, int e){
    if(s>=e) return;
    int mid = s + (e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);
    merge(arr, s, e);
}

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0,  nums.size()-1);
        return nums;
    }
};
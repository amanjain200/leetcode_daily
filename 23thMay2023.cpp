/*

703. Kth Largest Element in a Stream
Easy
4.4K
2.7K
Companies
Design a class to find the kth largest element in a stream. Note that it is the kth largest element in the sorted order, not the kth distinct element.

Implement KthLargest class:

KthLargest(int k, int[] nums) Initializes the object with the integer k and the stream of integers nums.
int add(int val) Appends the integer val to the stream and returns the element representing the kth largest element in the stream.
 

Example 1:

Input
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
Output
[null, 4, 5, 5, 8, 8]

Explanation
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
kthLargest.add(3);   // return 4
kthLargest.add(5);   // return 5
kthLargest.add(10);  // return 5
kthLargest.add(9);   // return 8
kthLargest.add(4);   // return 8
 

Constraints:

1 <= k <= 104
0 <= nums.length <= 104
-104 <= nums[i] <= 104
-104 <= val <= 104
At most 104 calls will be made to add.
It is guaranteed that there will be at least k elements in the array when you search for the kth element.
*/

/*

class KthLargest {
    priority_queue<int,vector<int>,greater<int>>pq;
    int size;
public:
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(auto i:nums){
            if(pq.size()<k){
                pq.push(i);
                continue;
            }
            if(i>pq.top()){
                pq.pop();
                pq.push(i);
            }
        }
    }
    
    int add(int val) {
        if(pq.size()<size){
                pq.push(val);
                return pq.top();
            }
            if(val>pq.top()){
                pq.pop();
                pq.push(val);
            }
            return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);


*/
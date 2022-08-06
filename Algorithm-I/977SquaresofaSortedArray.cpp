https://leetcode.com/problems/squares-of-a-sorted-array/

// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

// Example 1:

// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].
// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]
 

// Constraints:

// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in non-decreasing order.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int low=0;
        int high=nums.size()-1;
       
       for(int i = nums.size()-1; i>=0;i--)
       {
           if(abs(nums[low]) > nums[high])
           {
               ans[i] = nums[low] * nums[low];
               low++;
           }
           else
           {
               ans[i] = nums[high] *nums[high];
               high--;
           }
       }
       return ans;
    }
};
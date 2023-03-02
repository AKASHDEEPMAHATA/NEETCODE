// LINK : https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

// Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [5,6]

// Example 2:
// Input: nums = [1,1]
// Output: [2]


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        unordered_set<int> st;
        int n = nums.size();
        vector<int>v;

        for(int i=0;i<n;i++) st.insert(nums[i]);
        for(int i=1;i<=n;i++) if(st.find(i)==st.end()) v.push_back(i);

        return v;
    }
};
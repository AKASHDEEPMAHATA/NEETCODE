// LINK : https://leetcode.com/problems/is-subsequence/

// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

 

// Example 1:
// Input: s = "abc", t = "ahbgdc"
// Output: true

// Example 2:
// Input: s = "axc", t = "ahbgdc"
// Output: false


// using two pointers
// TC : O(n) (not sure*)
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; //for string t traversing
        int j = 0; //for string s traversing

        for(i = 0;i<t.size() and j<s.size();i++){
            if(s[j]==t[i]) j++;
        }

        if(j==s.size()) return true;
        return false ;
    }
};
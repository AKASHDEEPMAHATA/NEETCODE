// LINK : https://leetcode.com/problems/contains-duplicate/

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:
// Input: nums = [1,2,3,1]
// Output: true

// Example 2:
// Input: nums = [1,2,3,4]
// Output: false

// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true



#include<bits/stdc++.h>
using namespace std;

 bool cd(vector<int>arr){
    map<int,int> mp;
    for(int i=0;i<arr.size();i++) mp[arr[i]]++;
    for(auto i:mp) if(i.second>1) return true;
    return false;
 }


int main(){

    int a[] = {1,1,1,3,3,4,3,2,4,2};
    int n = sizeof(a)/sizeof(a[0]);

    vector<int> v(a,a+n);
    bool ans = cd(v);

    if(ans==1) cout<<"True";
    if(ans==0) cout<<"False";

    return 0;
}








// Brute Force : 

// 1. Nested loop [tc : o(n^2) sc: o(1)]

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[i+1]) return true;
    }
}
return false;

// 2. Sorting + single loop [tc : o(nlogn) sc: o(1)]

sort(arr.begin(),arr.end());

for(int i =0;i<arr.size()-1;i++){
    if(arr[i] == arr[i+1]) return true;
}
return false;

// 3. set [tc : o(n) sc: o(1)]
set<int> s;
for(auto i : arr) s.insert(i);
if(s.size()!arr.size()) return true;
return false;


// 4. Hash set [tc : o(n) sc: o(n)]

unordered_set<int> s;
for(int i=0;i<arr.size();i++){
    if(s.find(arr[i])!=s.end()) return true; // means contains duplicate
    s.insert(arr[i]);
}
return false;


// 5. Hash map [tc : o(n) sc: o(n)]

map<int,int> mp;
for(int i=0;i<arr.size();i++) mp[arr[i]]++;
for(auto i:mp){
    if(i.second>1) return true;
}
return false;
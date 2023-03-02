// LINK  : https://leetcode.com/problems/maximum-number-of-balloons/

// Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

// You can use each character in text at most once. Return the maximum number of instances that can be formed.

 

// Example 1:
// Input: text = "nlaebolko"
// Output: 1


// Example 2:
// Input: text = "loonbalxballpoon"
// Output: 2

// Example 3:
// Input: text = "leetcode"
// Output: 0




// using hash map
//  TC : O(n) SC : O(n) 
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mp;
        int n = text.size();
        for(int i=0;i<n;i++) mp[text[i]]++;
        

        int ans = min({mp['b'],mp['a'],mp['l']/2,mp['o']/2,mp['n']});

        return ans;
    }
};





// using loop (no extra space is needed) 
// //  TC : O(n) SC : O(1) 

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int b = 0;int a = 0;int l = 0;int o = 0;int n = 0;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b') b++;
            if(text[i]=='a') a++;
            if(text[i]=='l') l++;
            if(text[i]=='o') o++;
            if(text[i]=='n') n++;
        }

        l = l/2;
        o = o/2;

        return min({b,a,l,o,n});
    }
};

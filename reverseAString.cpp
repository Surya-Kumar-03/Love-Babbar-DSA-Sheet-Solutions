class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0,j=s.size()-1;i<j;i++,j--)
        {
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};


// 344. Reverse String
// Easy

// 6145

// 1001

// Add to List

// Share
// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

 

// Example 1:

// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:

// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]
 

// Constraints:

// 1 <= s.length <= 105
// s[i] is a printable ascii character.
/*
Problem:4- > Palindrome Number
Platform: LeetCode
Difficulty: Easy

Approach:
- Negative numbers are not palindrome
- Reverse the number using modulo (%) and division (/)
- Compare reversed number with original number
- If both are equal → palindrome, else not

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(int x) {
        
        // Negative numbers cannot be palindrome
        if(x < 0) return false; 
        
        int original = x;      // store original number
        long long rev = 0;     // to store reversed number
        
        // Reverse the number
        while(x > 0){
            int digit = x % 10;        // get last digit
            rev = rev * 10 + digit;   // build reversed number
            x = x / 10;               // remove last digit
        }

        // Compare original and reversed
        return original == rev;
    }
};
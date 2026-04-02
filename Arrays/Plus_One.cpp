/*
Problem: Plus One
Platform: LeetCode
Difficulty: Easy

Approach:
- Traverse digits from right to left
- If digit < 9, increment it and return result
- If digit == 9, set it to 0 (carry forward)
- If all digits are 9, insert 1 at the beginning

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
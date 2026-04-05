/*
Problem 27: Remove Element
Platform: LeetCode
Difficulty: Easy

Approach:
- Use Two Pointer technique
- Pointer k stores position of valid elements
- Traverse array and copy elements not equal to val

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // pointer for valid elements

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;  // new length
    }
};
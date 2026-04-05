/*
Problem 26: Remove Duplicates from Sorted Array
Platform: LeetCode
Difficulty: Easy

Approach:
- Use Two Pointer technique
- Pointer i tracks position of unique elements
- Pointer j traverses the array
- When nums[j] != nums[i], increment i and update nums[i]

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;  
        
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        
        return i + 1;  
    }
};
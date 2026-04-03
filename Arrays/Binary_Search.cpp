/*
Problem: Search Insert Position
Platform: LeetCode
Difficulty: Easy

Approach:
- Use Binary Search
- If target found → return index
- If not found → return position where it should be inserted
- Final answer is 'start'

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }

        return start;  // insert position
    }
};
/*
Problem: Peak Index in a Mountain Array
Platform: LeetCode
Difficulty: Medium

Approach:
- Use Binary Search
- If arr[mid] < arr[mid + 1], peak lies on right side
- Else peak lies on left side (including mid)
- Continue until start == end

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (arr[mid] < arr[mid + 1]) {
                start = mid + 1;   // move right
            } else {
                end = mid;         // move left (including mid)
            }
        }
        return start;  // peak index
    }
};
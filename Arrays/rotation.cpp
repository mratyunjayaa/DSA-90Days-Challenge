/*
Problem: Rotate Array
Platform: LeetCode
Difficulty: Medium

Approach 1 (Brute Force):
- Rotate array one step at a time, k times
- Each rotation shifts elements to right

Time Complexity: O(n * k)
Space Complexity: O(1)

--------------------------------------------------

Approach 2 (Optimized - Reverse Trick):
- Reverse entire array
- Reverse first k elements
- Reverse remaining elements

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:

    // 🔹 Approach 1: Brute Force
    void rotateBrute(vector<int>& nums, int k) {
        int n = nums.size();

        for (int i = 0; i < k; i++) {
            int temp = nums[n - 1];  // store last element

            // shift all elements right
            for (int j = n - 1; j > 0; j--) {
                nums[j] = nums[j - 1];
            }

            nums[0] = temp;  // place last element at front
        }
    }

    // 🔹 Approach 2: Optimized (Used in LeetCode)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // handle k > n

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
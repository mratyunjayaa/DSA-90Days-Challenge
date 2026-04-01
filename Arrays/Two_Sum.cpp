/*
Problem: Two Sum
Platform: LeetCode
Difficulty: Easy

Approach 1 (Brute Force):
- Check every pair
- If sum == target, return indices
Time Complexity: O(n^2)

Approach 2 (Optimized - HashMap):
- Store elements in map
- Check complement
Time Complexity: O(n)
*/

#include <vector>
using namespace std;

// Brute Force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
};
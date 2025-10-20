// Leetcode 31
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;

        // Step 1: Find the first decreasing element from the end
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        // Step 2: If no decreasing element, reverse the entire array
        if (idx == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the smallest element larger than nums[idx]
        int j = -1;
        for (int i = n - 1; i > idx; i--) {
            if (nums[i] > nums[idx]) {
                j = i;
                break;
            }
        }

        // Step 4: Swap nums[idx] and nums[j]
        swap(nums[idx], nums[j]);

        // Step 5: Reverse the portion of the array from idx + 1 to the end
        reverse(nums.begin() + idx + 1, nums.end());
    }
};

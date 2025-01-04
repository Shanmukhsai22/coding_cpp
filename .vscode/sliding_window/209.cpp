class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int current_sum = 0, left = 0, res = INT_MAX;
        for (int right = 0; right < nums.size(); ++right) {
            current_sum += nums[right];
            
            while (current_sum >= target) {           //classical sliding window
                res = min(res, right - left + 1);
                current_sum -= nums[left];
                left++;
            }
        }
        return res == INT_MAX ? 0 : res;
    }
};

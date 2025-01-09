class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lp = 0, rp = n - 1;
        
        while (lp < rp) {
            int mid = lp + (rp - lp) / 2;
            if (nums[mid] > nums[rp]) {            //classic modified bin search
                lp = mid + 1;
            } else {
                rp = mid;
            }
        }

        int pivot = lp;

        lp = 0, rp = n - 1;
        if (target >= nums[pivot] && target <= nums[rp]) {
            lp = pivot; 
        } else {
            rp = pivot - 1; 
        }

        
        while (lp <= rp) {
            int mid = lp + (rp - lp) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                lp = mid + 1;
            } else {
                rp = mid - 1;
            }
        }

        return -1; 
    }
};

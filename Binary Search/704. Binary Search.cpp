class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;
        while(l <= h) {
            int m = l + (h - l) / 2; // to avoid overflow for large l + h
            if(nums[m] == target) return m;
            else if(target > nums[m]) l = m + 1;
            else h = m - 1;
        }
        return -1;
    }
};

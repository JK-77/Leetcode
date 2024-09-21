// Iterative Approch 
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

// Recursion
class Solution {
public:

    int bs(vector<int> &nums, int low, int high, int target) {
        if (low > high) return -1;
        int mid = low + (high - low) / 2;
        if(nums[mid] == target) return mid;
        else if(target > nums[mid]) return bs(nums, mid + 1, high, target);
        return bs(nums, low, mid - 1, target);
    }

    int search(vector<int>& nums, int target) {
        return bs(nums, 0, nums.size() - 1, target);
    }
};

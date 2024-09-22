class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        // Edge cases where the single element is the first or last element
        if (n == 1) return nums[0];
        if (nums[0] != nums[1]) return nums[0];
        if (nums[n - 1] != nums[n - 2]) return nums[n - 1];
        
        int low = 1, high = n - 2;
        
        while(low <= high) {
            int mid = (low + high) / 2;

            // If the middle element is the unique one, return it
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
                return nums[mid];
            }

            // Determine which side the single element lies on
            if ((mid % 2 == 1 && nums[mid] == nums[mid - 1])  // We are on the left side
                 || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return -1;  // Should never reach here in a valid input case
    }
};

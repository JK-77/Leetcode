// TC : O( 2 * log n ) uppper and lower
// SC : O(1)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res = {-1, -1};

        auto lower = lower_bound(nums.begin(), nums.end(), target);
        auto upper = upper_bound(nums.begin(), nums.end(), target);

        if (lower != nums.end() &&  *lower == target) {
            res[0] = lower - nums.begin();
            res[1] = upper - nums.begin() - 1;
        }
        return res;
    }
};

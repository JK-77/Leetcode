// TC: O(N)  SC: O(1) 
// 2 Pointer ( Optimal )
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != nums[j-1]) {
                nums[j++] = nums[i];
            }
        }
        return j;
    }
};

// Using Set extra Space 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Insert all elements into a set, which automatically removes duplicates
        set<int> uniqueSet(nums.begin(), nums.end());

        // Reassign the vector with the unique elements from the set
        nums.assign(uniqueSet.begin(), uniqueSet.end());

        // Return the new size of the array
        return nums.size();
    }
};

// TC : O(N) 
// SC : O(1)
// Moore Voting Algorithm 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int ele;
        for(int i = 0; i < nums.size(); i++) {
            if(cnt == 0) {
                ele = nums[i];
            }
            if(nums[i] == ele) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        return ele;
    }
};

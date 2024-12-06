class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int sum = 0;
        mp[0] = -1;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int rem = sum % k;

            if(mp.find(rem) != mp.end()) {      //past m kahi dkha h 
                if(i - mp[rem] >= 2) return true;
            }
            else {
                mp[rem] = i;
            }
        }
        return false;
    }
};

// log(sum - max) * O(N)

class Solution {
public:
    int findDays(vector<int> &w, int cap) {
        int days = 1, load = 0;
        for(int i = 0; i < w.size(); i++) {
            if(w[i] + load > cap)  days += 1, load = w[i];
            else load += w[i];
        }
        return days;
    }

    int shipWithinDays(vector<int>& w, int days) {
        int low = *max_element(w.begin(), w.end());
        int high = accumulate(w.begin(),w.end(), 0);
        while(low <= high) {
            int mid = (low + high) / 2;
            int noOfDays = findDays(w, mid);
            if(noOfDays <= days)  high = mid - 1;
            else low = mid + 1;
        }
        return low;

    }
};

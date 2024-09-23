// O( N * log( max - min + 1)
// O(1)

class Solution {
public:
    bool possible(vector<int> & arr, int day, int m, int k) {
        int cnt = 0, noOfB = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] <= day) cnt++;
            else noOfB += (cnt / k), cnt = 0;
        }
        noOfB += (cnt / k);
        return noOfB >= m;
    }

    int minDays(vector<int>& arr, int m, int k) {
        long long val = m * 1ll * k * 1ll;
        if(val > arr.size()) return -1;
        int mini = *min_element(arr.begin(),arr.end());
        int maxi = *max_element(arr.begin(),arr.end());
        int low = mini, high = maxi;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(possible(arr, mid, m, k))  high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};

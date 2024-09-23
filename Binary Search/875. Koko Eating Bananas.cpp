class Solution {
public:
    long long calTotHrs(vector<int> &v, int hourly) {
        long long n = v.size();
        long long totH = 0;
        for(long long i = 0; i < n; i++) {
            totH += ceil(double(v[i])/ double(hourly));
        }
        return totH;
    }

    int minEatingSpeed(vector<int>& v, int h) {
        long long low = 1, high = *max_element(v.begin(),v.end());
        while(low <= high) {
            long long mid = (high + low) / 2;
            long long totH = calTotHrs(v, mid);
            if(totH <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};

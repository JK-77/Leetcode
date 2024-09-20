class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {

        sort(s.begin(),s.end());
        string first = s[0];
        string last = s[s.size() - 1];

        int n = min(first.size(),last.size());

        int prefixSize = 0;

        for(int i = 0; i < n; i++) {
            if(first[i] == last[i]) {
                prefixSize++;
            }
            else {
                break;
            }
        }
        return first.substr(0,prefixSize);
        
    }
};

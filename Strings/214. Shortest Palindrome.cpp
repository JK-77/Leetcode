// TC : O(N)   SC : O(N)
// KMP (Knuth-Morris-Pratt) algorithm for String maching
// Longest prefix suffix (LPS)
class Solution {
public:

    void func(vector<int> &lps, string a) {
        int i = 0;
        int j = 1;

        while(j < a.length()) {
            if(a[i] == a[j]) {
                i++;
                lps[j] = i;
                j++;
            }
            else {
                if(i == 0) {
                    j++;
                }
                else {
                    i = lps[i - 1];
                }
            }
        }
    }

    string shortestPalindrome(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        string a = s + '#' + t;   
        vector<int> lps(a.length(),0);

        func(lps,a);  
        int i = lps[a.length() - 1];
        string temp = s.substr(i);

        reverse(temp.begin(),temp.end());
        return temp + s;
    }
};

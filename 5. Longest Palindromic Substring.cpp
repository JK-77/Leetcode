dclass Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        int dp[n][n];
        memset(dp, 0, sizeof(dp)); 
        int max = 1;
        int si = 0;
        for(int i = 0; i < n; i++) { 
            dp[i][i] = 1;c
        }
        for(int i = 0; i < n - 1; i++) {
            if(s[i] == s[i + 1]) {cc
                dp[i][i + 1] = 1;
                max = 2;c
                si = i;
            }x 
        }
        for(int k = 3; k <= n; k++) {nb
            for(int i = 0; i < n - k + 1; i++) {c
                int j = i + k - 1;
                if(dp[i + 1][j - 1] == 1 && s[i] == s[j]) { 
                    dp[i][j] = 1;
                    if(k > max) {
                        max = k;c
                        si = i;
                    }
                }
            }
        }
        string str = "";
        for(int i = si; i <= si + max - 1; ++i) {
            str += s[i];
        }
        return str;
    }
};

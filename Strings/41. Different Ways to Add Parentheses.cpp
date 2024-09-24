// O(N * 2^N)
class Solution {
public:
    vector<int> solve(string s) {
        vector<int> res;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '+' || s[i] == '-' || s[i] == '*') {
                vector<int> left_res = solve(s.substr(0,i));
                vector<int> right_res = solve(s.substr(i+1));

                for(int &x : left_res) {
                    for(int &y : right_res) {
                        if(s[i] == '+') {
                            res.push_back(x + y);
                        } else if(s[i] == '-') {
                            res.push_back(x - y);
                        } else {
                            res.push_back(x * y);
                        }
                    }
                }
            }
        }

        if(res.empty()) {
            res.push_back(stoi(s)); // str -> int (special case) if no operater
        }
        return res;
    }

    vector<int> diffWaysToCompute(string s) {
        return solve(s);
    }
};

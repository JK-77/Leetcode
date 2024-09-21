// TC : O(N) 
// SC : O( depends on size of N)

class Solution {
public:

    void solve(int curr, int n, vector<int>& res) {
        if(curr > n) {
            return;
        }
        res.push_back(curr);

        for(int append = 0; append <= 9; append++) {
            int newNum = curr * 10 + append;

            if(newNum > n) {
                return;
            }
            solve(newNum, n, res); //DFS
        }
    }

    vector<int> lexicalOrder(int n) {
        vector<int> res;

        for(int stNum = 1; stNum <=9; stNum++) {
            solve(stNum, n, res);
        }
        return res;
    }
};

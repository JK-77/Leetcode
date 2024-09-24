class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();

        int stidx = 0;
        int totalGas = 0, totalCost = 0;
        int currGas = 0;

        for(int i = 0; i < n; i++) {
            totalGas += gas[i];
            totalCost += cost[i];
            currGas = currGas + gas[i] - cost[i];

            if(currGas < 0) {
                stidx = i + 1;
                currGas = 0;
            }
        }
        if(totalGas >= totalCost) {
            return stidx;
        }
        return -1;
    }
};

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = (int)gas.size();
        gas[0] -= cost[0];
        cost[0] = gas[0];
        int smallest = cost[0];
        int index = 0;
        for(int i = 1; i < n; i++){
            gas[i] -= cost[i];
            cost[i] = cost[i - 1] + gas[i];
            if(cost[i] < smallest){
                smallest = cost[i];
                index = i;
            } 
        }

        if(cost[n - 1] < 0)
            return -1;
        
        if(index == n - 1)
            return 0;
        else
            return index + 1;
    }
};
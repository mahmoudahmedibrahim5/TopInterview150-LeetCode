class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int c1 = 0, c2 = numbers.size() - 1;
        vector<int>result;
        while(numbers[c1] + numbers[c2] != target){
            if(numbers[c1] + numbers[c2] > target)
                c2--;
            else if(numbers[c1] + numbers[c2] < target)
                c1++;
        }
        result.push_back(c1 + 1);
        result.push_back(c2 + 1);
        return result;
    }
};
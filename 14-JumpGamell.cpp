class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1)
            return 0;
        int count = 0;
        int farthest = 0;
        int currentEnd = 0;
        int n = (int)nums.size();
        for(int i = 0; i < n; i++)
        {
            farthest = max(farthest, i + nums[i]);
            if(currentEnd == i)
            {
                count++;
                currentEnd = farthest;
                if(currentEnd >= n - 1)
                    break;
            }
        }
        return count;
    }
};

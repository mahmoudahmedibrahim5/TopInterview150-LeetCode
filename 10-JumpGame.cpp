class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1)
            return true;

        bool answer = true;
        int longest = nums[0];
        for(int i = 0; i < n - 1; i++)
        {
            longest = max(longest - 1, nums[i]);
            if(longest == 0){
                answer = false;
                break;
            }
        }
        return answer;
    }
};
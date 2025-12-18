class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c = 1;
        int n = nums.size() - 1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] != nums[i + 1]){
                nums[c] = nums[i + 1];
                c++;
            }
        }
        return c;
    }
};
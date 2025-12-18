class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < (int)nums.size(); i++){
            if(nums[i] == val)
                nums.erase(nums.begin() + i--);
            else
                k++;
        }
        return k;
    }
};
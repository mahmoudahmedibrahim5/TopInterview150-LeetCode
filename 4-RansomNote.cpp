class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[28] = {0};
        for(int i = 0; i < magazine.size(); i++)
            arr[magazine[i] - 'a']++;
        
        bool feasible = true;
        for(int i = 0; i < ransomNote.size(); i++)
        {
            arr[ransomNote[i] - 'a']--;
            if(arr[ransomNote[i] - 'a'] < 0){
                feasible = false;
                break;
            }
        }
        return feasible;
    }
};
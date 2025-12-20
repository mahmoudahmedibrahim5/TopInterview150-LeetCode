class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        int n1 = s.size(), n2 = t.size();
        if(n1 != n2)
            return false;
        for(int i = 0; i < n1; i++)
            mp[s[i]]++;
        
        for(int i = 0; i < n2; i++)
        {
            if(mp[t[i]] == 0)
                return false;
            mp[t[i]]--;
        }
        return true;
    }
};
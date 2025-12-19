class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;

        char letters[128] = {0};
        char used[128] = {0};
        bool answer = true;
        for(int i = 0; i < (int)s.size(); i++)
        {
            if(letters[s[i]] == 0)
            {
                if(used[t[i]])
                {
                    answer = false;
                    break;
                }
                letters[s[i]] = t[i];
                used[t[i]] = 1;
            }
            else if(letters[s[i]] != t[i])
            {
                answer = false;
                break;
            }
        }
        return answer;
    }
};
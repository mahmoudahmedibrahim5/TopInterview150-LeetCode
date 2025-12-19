class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        unordered_map<char, string> charToString;
        unordered_map<string, char> stringToChar;

        int len = pattern.size();
        int siz = s.size();
        int j = 0;
        bool answer = true;
        for(int i = 0; i < len; i++)
        {
            if(j >= siz){
                answer = false;
                break;
            }
            string subString;
            while(s[j] != ' ' && s[j] != '\0')
                subString.push_back(s[j++]);
            j++;

            if(!charToString.count(pattern[i]))
            {
                charToString[pattern[i]] = subString;
            }
            else if(charToString[pattern[i]] != subString)
            {
                answer = false;
                break;
            }

            if(!stringToChar.count(subString))
            {
                stringToChar[subString] = pattern[i];
            }
            else if(stringToChar[subString] != pattern[i])
            {
                answer = false;
                break;
            }
        }

        if(j < siz)
            answer = false;

        return answer;
    }
};
class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>fre;
        for(auto &i:s)
        {
            fre[i]++;
        }
        for(auto &i:t)
        {
            if(!fre[i])
            {
                return i;
            }
            else
            {
                fre[i]--;
            }
        }
        return ' ';
    }
};
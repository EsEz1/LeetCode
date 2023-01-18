class Solution {
public:
    string toLowerCase(string s) {
        for(auto &i:s)
        {
            if(isupper(i))
               i+=32;
        }
        return s;
    }
};
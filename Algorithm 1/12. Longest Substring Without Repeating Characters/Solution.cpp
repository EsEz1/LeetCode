// The first soltution
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int sz = str.size(), res = 0;
        for (int i = 0; i < sz; i++) {
            map<char, int> fre;
            for (int j = i; j < sz; j++) {
                if (fre[str[j]])
                    break;
                else {
                    res = max(res, j - i + 1);
                    fre[str[j]]++;
                }
            }
        }
        return res;
    }
};



// An optimized solution
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int start = 0;
        int end = 0;
        int sz = str.size(), res = 0;
        map<char, int> fre;
        while (end < sz) {
            fre[str[end]]++;
            while (fre[str[end]] > 1) {
                fre[str[start]]--;
                start++;
            }
            res = fmax(res, end - start + 1);
            end++;
        }
        return res;
    }
};
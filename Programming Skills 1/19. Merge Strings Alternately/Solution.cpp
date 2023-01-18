class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int sz = max(word1.size(), word2.size());
        int szOfWord1 = word1.size();
        int szOfWord2 = word2.size();
        string z = "";
        for (int i = 0; i < sz; i++) {
            if (i < szOfWord1) {
                z += word1[i];
            }
            if (i < szOfWord2) {
                z += word2[i];
            }
        }
        return z;
    }
};
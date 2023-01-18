class Solution {
public:
    int diagonalSum(vector <vector<int>> &mat) {
        int sz = mat.size(), sum = 0;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                if (i == j || i == sz - j - 1) {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};
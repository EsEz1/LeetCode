class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c) {
        if(r*c!=mat.size()*mat[0].size())
            return mat;
        vector<vector<int>>q(r);
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
            q[i]=vector<int>(c);
        }
        int pointer=0;
        for(auto i:mat)
        {
            for(auto j:i)
            {
                q[pointer/c][pointer%c]=j;
                pointer++;
            }
        }
        return q;
    }
};
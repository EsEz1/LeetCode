class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn=0,counter=0,result=0;
        int  sz=points.size();
        for(int i=0;i<sz;i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                int z = abs(points[i][0]-x)+abs(points[i][1]-y);
                if(!counter)
                {
                    result=z;
                    mn=i;
                    counter=1;
                }
                else
                {
                    if(z<result)
                    {
                        mn=i;
                        result=z;
                    }
                }
            }
        }
        if(!counter)
            return -1;
        return mn;
    }
};
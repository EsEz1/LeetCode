class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int sz=s1.size(),counter=0;
        int x=-1,j=-1;
        for(int i=0;i<sz;i++)
        {
            if(s1[i]!=s2[i])
            {
                if(x==-1)
                {
                    x=i;
                }
                else if(j==-1)
                {
                    j=i;
                }
                counter++;
            }
        }
        if(!counter)
        {
            return true;
        }
        else if(counter==2)
        {
            swap(s1[x],s1[j]);
            if(s1==s2)
                return true;
            else
                return false;
        }
        else
        {
            return false;
        }
    }
};
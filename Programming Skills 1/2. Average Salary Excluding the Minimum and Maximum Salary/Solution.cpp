class Solution {
public:
    double average(vector<int>& salary) {
        double z=0,mn=INT_MAX,mx=INT_MIN;
        for(auto &i:salary)
        {
            mn=fmin(mn,i);
            mx=fmax(mx,i);
        }
        int counter=0;
         for(auto &i:salary)
        {
            if(i!=mn && i!=mx)
                 z+=i,counter++;
        }
        return z/counter;
    }
};
class Solution {
public:
    bool isHappy(int n) {
        map<long long,int>fre;
        fre[n]++;
        while(fre[n]<=1)
        {
            long long result=0;
            while(n!=0)
            {
                result+=pow(n%10,2);
                n/=10;
            }
            if(result==1)
                return true;
            fre[result]++;
            n=result;
        }
        return false;
    }
};
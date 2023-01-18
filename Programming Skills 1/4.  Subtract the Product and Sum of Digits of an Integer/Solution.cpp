class Solution {
public:
    int subtractProductAndSum(int n) {
        int z=n,sum=0,sum1=1;
        while(z!=0)
        {
            sum+=(z%10);
            sum1*=(z%10);
            z/=10;
        }
        return sum1-sum;
    }
};
class Solution {
public:
    int ans[38]={0};
    int tribonacci(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        if(n==2)
        {
            return 1;
        }
        if(ans[n]!=0)
        {
            return ans[n];
        }
        ans[n]=tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3);
        return ans[n];
    }
};




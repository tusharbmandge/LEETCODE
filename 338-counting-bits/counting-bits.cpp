class Solution {
public:
    int decimalToBinary(int n)
    {
        if(n==0)
        {
            return 0;
        }
        int count=0;
        while(n>0)
        {
            int temp=n%2;
            if(temp==1)
            {
                count++;
            }
            n=n/2;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++)
        {
           int temp= decimalToBinary(i);
           ans.push_back(temp);
        }
        return ans;
    }
};


// 8421
class Solution {
public:
    int solve(vector<int>& nums,vector<int>& dp,int i)
    {
        if(i==0)
        {
            return nums[i];
        }
        if(i<0)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int include=solve(nums,dp,i-2)+nums[i];

        int exclude=solve(nums,dp,i-1);
        if(include>exclude)
        {
            dp[i]=include;
            return include;
        }
        else
        {
            dp[i]=exclude;
            return exclude;
        }    

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int ans=solve(nums,dp,nums.size()-1);
        return ans;
    }
};
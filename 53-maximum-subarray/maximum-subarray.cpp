class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int large=nums[0];
        int sum=0;
        for (int i=0;i<nums.size();i++)
        {
            sum=sum+nums[i];
            if (sum>large)
            {
                large=sum;
            }
            if (sum<0)
            {
                sum=0;
            }
        }
        return large;
    }
};
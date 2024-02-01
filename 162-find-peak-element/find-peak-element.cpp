class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // for (int i=1;i<nums.size();i++)
        // {
        //     if ((i+1)<nums.size())
        //     {
        //         if (nums[i]>nums[i-1] && nums[i]>nums[i+1])
        //         {
        //             return i;
        //         }
        //     }
        //     else
        //     {
        //         if (nums[0]>nums[1])
        //         {
        //             return 0;
        //         }
        //         if (nums[1]>nums[0])
        //         {
        //             return 1;
        //         }
        //     }
        // }
        // return 0;
        int max=0;
        for (int i=0;i<nums.size()-1;i++)
        {
            if (nums[i]<nums[i+1])
            {
                max=i+1;
            }
        }
        return max;
    }
};
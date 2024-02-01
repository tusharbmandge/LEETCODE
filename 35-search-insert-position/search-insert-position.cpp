class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        if (target > nums[end])
        {
            return nums.size();
        }
        if (target < nums[start])
        {
            return 0;
        }
        while(start<=end)
        {
            int med=(start+end)/2;
            if (target < nums[med])
            {
                if (target > nums[med-1])
                {
                    return med;
                }
                end=med-1;


            }
            if (target > nums[med])
            {
                if (target < nums[med+1])
                {
                    return med+1;
                }
                start=med+1;
            }
            if(target == nums[med])
            {
                return med;
            }
        }
        return 0;
    }
};
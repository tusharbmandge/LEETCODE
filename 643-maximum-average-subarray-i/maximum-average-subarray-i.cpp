class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max_no=0,large=0;
        double avg;
        int i;
        for (i=0;i<k;i++)
        {
            max_no= max_no+nums[i];
            large=max_no;
        }
        for (i=k;i<nums.size();i++)
        {
            
            max_no=max_no+nums[i]-nums[i-k];
            if (max_no>large)
            {
                large=max_no;
            }
        }
        avg= (double)large/k;
        return avg;
    }
};
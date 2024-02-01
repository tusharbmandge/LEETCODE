class Solution {
public:
    void ans(vector<int>nums,vector<vector<int>> &final_ans,int index)
    {
        if(index>=nums.size())
        {
            final_ans.push_back(nums);
            return;
        }
        for (int i=index;i<nums.size();i++)
        {
            int temp=nums[index];
            nums[index]=nums[i];
            nums[i]=temp;
            ans(nums,final_ans,index+1);
        }



    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> final_ans;
        int index=0;
        ans(nums,final_ans,index);
        return final_ans;
    }
};
class Solution {
public:
    void ans(vector<int> nums,vector<vector<int>> &final_ans,vector<int> output, int index)
    {
        if(index>=nums.size())
        {
            final_ans.push_back(output);
            return;
        }
        ans(nums, final_ans, output, index+1); //exlude
        output.push_back(nums[index]);
        ans(nums, final_ans, output, index+1);  //include

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> final_ans;
        vector<int> output;
        int index=0;
        ans(nums, final_ans, output, index);

        return final_ans;
    }
};

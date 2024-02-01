class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i=0;i<nums1.size();i++)
        {
            int temp=0;
            int flag=0;
            for (int j=0;j<nums2.size();j++)
            {
                if (nums1[i]==nums2[j])
                {
                    flag=1;
                }
                if (flag==1 && nums2[j]>nums1[i])
                {
                    ans.push_back(nums2[j]);
                    temp=1;
                    break;
                }
            }
            if (temp==0)
            {
                ans.push_back(-1);
            }
        }
        return ans;
    }
};
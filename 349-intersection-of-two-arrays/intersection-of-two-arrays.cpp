class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> ans;
        vector <int> final;
        for (int i=0;i<nums2.size();i++)
        {
            for (int j=0;j<nums1.size();j++)
            {
                if (nums2[i]==nums1[j])
                {
                    ans.insert(nums2[i]);
                }
            }
        }   
        for (auto i:ans)
        {
            final.push_back(i);
        }
        return final;
    }

};
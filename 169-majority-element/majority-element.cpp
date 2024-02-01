class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int>  mt;
        for (auto i:nums)
        {
            if (mt.count(i))
            {
                mt[i]++;
            }
            else
            {
                mt[i]=1;
            }
        }
        for (auto i:mt)
        {
            if (i.second>(nums.size()/2))
            {
                return i.first;
            }
        }
        return 0;
    }
};
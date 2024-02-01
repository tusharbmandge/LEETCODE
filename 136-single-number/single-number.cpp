class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> mt;
        for (auto i:nums)
        {
            if(mt.count(i))
                {
                    mt[i]++;
                }
            else
            {
                mt[i]=1;                             //2:1
            }
        }
        for (auto i:mt)
        {
            if (i.second==1)
            {
                return i.first;
            }
        }
    

    //     int arr_1[30001]={0};
    //     int arr_2[30000]={0};
    //     for (int i=0;i<nums.size();i++)
    //     {
    //         if (nums[i]>=0)
    //         {
    //             int temp=nums[i];
    //             arr_1[temp]++;
    //         }
    //         else
    //         {
    //             int temp=-nums[i];
    //             arr_2[temp]++;
    //         }
    //     }
    // for (int i=0;i<30001;i++)
    // {
    //     if (arr_1[i]==1)
    //     {
    //         return i;
    //     }
    // }
    // for (int i=0;i<30000;i++)
    // {
    //     if (arr_2[i]==1)
    //     {
    //         return -i;
    //     }
    // }
    return 0;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int array[255]={0};
        int count=0;
        int left=0;
        int right=0;
        for (int i=0;i<s.size();i++)
        {
            right=i;
            if(array[s[i]]!=0)
            {
                int temp=left;
                while(s[temp]!=s[i])
                {
                    array[s[temp]]=0;
                    temp++;
                }
                left=temp+1;
            }

            array[s[i]]++;
            if(right-left+1>count)
            {
                count=right-left+1;
            }
        }
        return count;
    }
};
// 97  98  99  97  98  99  98  98
// 1   1
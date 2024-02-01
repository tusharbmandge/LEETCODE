class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size())
        {
            return false;
        }

        int ht1[26]={0};
        int ht2[26]={0};
        for (int i=0;i<s.size();i++)
        {
            ht1[(int)s[i]-97]++;
        }
        for (int i=0;i<t.size();i++)
        {
            ht2[(int)t[i]-97]++;
        }
        int flag=0;
        for (int i=0;i<26;i++)
        {
            if (ht1[i]!=ht2[i])
            {
                flag=1;
            }
        }
        if (flag==1)
        {
            return false;
        }
        return true;
    }
};